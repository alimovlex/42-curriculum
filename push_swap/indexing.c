/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:26:18 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:26:21 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Check if all elements in stack have been indexed
 * @param stack Pointer to the stack
 * @return 1 if all elements are indexed, 0 otherwise
 *
 * An element is indexed when its index field is not -1.
 */
int	all_indexed(t_swap *stack)
{
	t_swap	*temp_list;

	temp_list = stack;
	while (temp_list)
	{
		if (temp_list->index == -1)
			return (0);
		temp_list = temp_list->next;
	}
	return (1);
}

/**
 * @brief Assign normalized indexes to all stack elements
 * @param stack Pointer to the stack
 *
 * Assigns indexes from 1 to n based on ascending value order:
 * - Smallest value gets index 1
 * - Second smallest gets index 2
 * - And so on...
 *
 * This normalization allows radix sort to work with any integer range.
 */
void	set_index(t_swap *stack)
{
	t_swap	*temp_list;
	int		i;
	int		min_value;

	temp_list = stack;
	min_value = get_min_value(stack);
	i = 1;
	while (temp_list)
	{
		if (temp_list->value == min_value)
		{
			temp_list->index = i;
			i++;
			min_value = next_min_value(stack, min_value);
			temp_list = stack;
		}
		else
			temp_list = temp_list->next;
	}
}
