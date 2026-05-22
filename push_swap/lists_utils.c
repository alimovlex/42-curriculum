/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:26:30 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:26:33 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Find minimum index value in the stack
 * @param stack Pointer to the stack
 * @return Smallest index value found
 *
 * Used to locate the minimum element by index for optimized small sorts.
 */
int	get_min_index(t_swap *stack)
{
	int		min_index;
	t_swap	*temp_list;

	if (!stack)
		return (0);
	temp_list = stack;
	min_index = temp_list->index;
	while (temp_list)
	{
		if (temp_list->index < min_index)
			min_index = temp_list->index;
		temp_list = temp_list->next;
	}
	return (min_index);
}

/**
 * @brief Check if stack is sorted in ascending order by index
 * @param stack Double pointer to the stack
 * @return 1 if sorted, 0 otherwise
 *
 * Verifies that each element's index is less than the next element's index.
 * Used to optimize by skipping already-sorted stacks.
 */
int	is_sorted(t_swap **stack)
{
	t_swap	*temp_list;

	if (!stack || !*stack)
		return (0);
	temp_list = *stack;
	while (temp_list->next)
	{
		if (temp_list->index > temp_list->next->index)
			return (0);
		temp_list = temp_list->next;
	}
	return (1);
}

/**
 * @brief Get pointer to the last node in the list
 * @param list Pointer to the list
 * @return Pointer to last node, or NULL if list is empty
 *
 * Traverses the list to find the tail node.
 */
t_swap	*get_last_list(t_swap *list)
{
	t_swap	*temp_list;

	if (!list)
		return (NULL);
	temp_list = list;
	while (temp_list->next)
		temp_list = temp_list->next;
	return (temp_list);
}

/**
 * @brief Free all nodes in the stack
 * @param stack Pointer to the stack head
 *
 * Traverses the list freeing each node. Handles circular references.
 * Called at program end to prevent memory leaks.
 */
void	free_list(t_swap *stack)
{
	t_swap	*temp;
	t_swap	*head;

	if (!stack)
		return ;
	head = stack;
	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
		if (stack == head)
			break ;
	}
}

/**
 * @brief Radix sort algorithm for stacks with 6+ elements
 * @param stack_a Double pointer to stack A
 * @param stack_b Double pointer to stack B
 *
 * Binary radix sort implementation:
 * 1. Iterate through each bit position (LSB to MSB)
 * 2. For each element, check the i-th bit of its index
 * 3. If bit is 0: push to stack B
 * 4. If bit is 1: rotate in stack A
 * 5. After processing all elements, push all from B back to A
 * 6. Repeat for next bit until stack is sorted
 *
 * Time complexity: O(n * k) where k = number of bits (typically log2(n))
 *
 * Example for indexes 1, 2, 3 (binary: 001, 010, 011):
 * - Bit 0: Separate 0s to B, keep 1s in A
 * - Bit 1: Separate 0s to B, keep 1s in A
 * - Result: Sorted!
 */
void	sort_stack(t_swap **stack_a, t_swap **stack_b)
{
	int	i;
	int	j;
	int	stack_size;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	i = 0;
	stack_size = list_size(*stack_a);
	while (!is_sorted(stack_a))
	{
		j = 0;
		while (*stack_a && j < stack_size && !is_sorted(stack_a))
		{
			if (((*stack_a)->index >> i) & 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		i++;
		while (*stack_b)
			push_a(stack_a, stack_b);
	}
}
