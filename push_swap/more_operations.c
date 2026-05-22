/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:27:05 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:27:08 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Rotate stack A up (ra operation)
 * @param stack_a Double pointer to stack A
 *
 * Moves first element to last position and prints "ra".
 */
void	rotate_a(t_swap **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	rotate(stack_a);
	ft_printf("ra\n");
}

/**
 * @brief Rotate stack B up (rb operation)
 * @param stack_b Double pointer to stack B
 *
 * Moves first element to last position and prints "rb".
 */
void	rotate_b(t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	rotate(stack_b);
	ft_printf("rb\n");
}

/**
 * @brief Rotate both stacks up (rr operation)
 * @param stack_a Double pointer to stack A
 * @param stack_b Double pointer to stack B
 *
 * Rotates both stacks simultaneously and prints "rr".
 */
void	rotate_a_and_b(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next
		|| !stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}

/**
 * @brief Rotate stack A down (rra operation)
 * @param stack_a Double pointer to stack A
 *
 * Moves last element to first position and prints "rra".
 */
void	reverse_rotate_a(t_swap **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

/**
 * @brief Rotate stack B down (rrb operation)
 * @param stack_b Double pointer to stack B
 *
 * Moves last element to first position and prints "rrb".
 */
void	reverse_rotate_b(t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}
