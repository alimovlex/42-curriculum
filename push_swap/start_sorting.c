/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:28:07 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:28:09 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Sort stack of exactly 2 elements
 * @param stack Double pointer to stack A
 *
 * Only one case: if first > second, swap them.
 * Maximum operations: 1 (sa)
 */
void	handle_two(t_swap **stack)
{
	if (!stack || !*stack)
		return ;
	if ((*stack)->value > (*stack)->next->value)
		swap_a(stack);
}

/**
 * @brief Sort stack of exactly 3 elements optimally
 * @param stack Double pointer to stack A
 *
 * Hardcoded solution covering all 5 possible unsorted permutations:
 * - Uses only sa (swap), ra (rotate), rra (reverse rotate)
 * - Maximum operations: 2
 *
 * Cases handled:
 * 1. [2,3,1] → sa
 * 2. [3,2,1] → sa + rra
 * 3. [3,1,2] → ra
 * 4. [1,3,2] → sa + ra
 * 5. [2,1,3] → rra
 */
void	handle_three(t_swap **stack)
{
	int	top;
	int	middle;
	int	bottom;

	if (!stack || !(*stack))
		return ;
	top = (*stack)->value;
	middle = (*stack)->next->value;
	bottom = (*stack)->next->next->value;
	if (top > middle && middle < bottom && top < bottom)
		swap_a(stack);
	else if (top > middle && middle > bottom)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	else if (top > middle && middle < bottom && top > bottom)
		rotate_a(stack);
	else if (top < middle && middle > bottom && top < bottom)
	{
		swap_a(stack);
		rotate_a(stack);
	}
	else if (top < middle && middle > bottom && top > bottom)
		reverse_rotate_a(stack);
}

/**
 * @brief Sort stack of exactly 4 elements optimally
 * @param stack_a Double pointer to stack A
 * @param stack_b Double pointer to stack B
 *
 * Strategy:
 * 1. Find minimum element position
 * 2. Rotate to bring min to top
 * 3. Push min to stack B (pb)
 * 4. Sort remaining 3 elements with handle_three()
 * 5. Push min back to stack A (pa)
 *
 * Maximum operations: ~8
 */
void	handle_four(t_swap **stack_a, t_swap **stack_b)
{
	int	min_index;

	if (!stack_a || !*stack_a)
		return ;
	min_index = get_min_index(*stack_a);
	while ((*stack_a)->index != min_index)
		rotate_a(stack_a);
	push_b(stack_a, stack_b);
	handle_three(stack_a);
	push_a(stack_a, stack_b);
}

/**
 * @brief Sort stack of exactly 5 elements optimally
 * @param stack_a Double pointer to stack A
 * @param stack_b Double pointer to stack B
 *
 * Strategy:
 * 1. Find minimum element position
 * 2. Rotate to bring min to top
 * 3. Push min to stack B (pb)
 * 4. Sort remaining 4 elements with handle_four()
 * 5. Push min back to stack A (pa)
 *
 * Maximum operations: ~12
 */
void	handle_five(t_swap **stack_a, t_swap **stack_b)
{
	int	min_index;

	if (!stack_a || !*stack_a)
		return ;
	min_index = get_min_index(*stack_a);
	while ((*stack_a)->index != min_index)
		rotate_a(stack_a);
	push_b(stack_a, stack_b);
	handle_four(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

/**
 * @brief Main sorting dispatcher - selects optimal algorithm
 * @param stack_a Double pointer to stack A
 * @param stack_b Double pointer to stack B
 *
 * Decision tree:
 * - Already sorted → return immediately
 * - Size 2 → handle_two() [max 1 op]
 * - Size 3 → handle_three() [max 2 ops]
 * - Size 4 → handle_four() [max ~8 ops]
 * - Size 5 → handle_five() [max ~12 ops]
 * - Size 6+ → sort_stack() [radix sort, O(n log n) ops]
 *
 * The optimized small-case handlers significantly reduce operation counts
 * compared to using radix sort for all sizes.
 */
void	start_sorting(t_swap **stack_a, t_swap **stack_b)
{
	int	stack_size;

	if (!stack_a || !*stack_a)
		return ;
	if (is_sorted(stack_a))
		return ;
	stack_size = list_size(*stack_a);
	if (stack_size == 2)
		handle_two(stack_a);
	else if (stack_size == 3)
		handle_three(stack_a);
	else if (stack_size == 4)
		handle_four(stack_a, stack_b);
	else if (stack_size == 5)
		handle_five(stack_a, stack_b);
	else
		sort_stack(stack_a, stack_b);
	free_list(*stack_a);
}
