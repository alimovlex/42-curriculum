/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:26:40 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:26:42 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Create a new list node
 * @param value Integer value for the node
 * @return Pointer to newly created node, or NULL on allocation failure
 *
 * Initializes value, sets next and prev to NULL.
 */
t_swap	*new_list(int value)
{
	t_swap	*new_list;

	new_list = (t_swap *)malloc(sizeof(t_swap));
	if (!new_list)
		return (NULL);
	new_list->value = value;
	new_list->next = NULL;
	new_list->prev = NULL;
	return (new_list);
}

/**
 * @brief Add node to the front of the stack
 * @param stack Double pointer to the stack
 * @param new_node Node to add at the front
 *
 * Updates head pointer and maintains prev/next links.
 */
void	push_front(t_swap **stack, t_swap *new_node)
{
	if (stack && new_node)
	{
		if (*stack)
		{
			new_node->next = *stack;
			new_node->prev = NULL;
			(*stack)->prev = new_node;
		}
		*stack = new_node;
	}
}

/**
 * @brief Add node to the back of the stack
 * @param stack Double pointer to the stack
 * @param new_node Node to add at the back
 *
 * Finds the last node and appends new_node, maintaining links.
 */
void	push_back(t_swap **stack, t_swap *new_node)
{
	t_swap	*last_list;

	if (stack)
	{
		if (*stack)
		{
			last_list = get_last_list(*stack);
			last_list->next = new_node;
			new_node->prev = last_list;
			new_node->next = NULL;
		}
		else
			*stack = new_node;
	}
}

/**
 * @brief Get the size of the stack
 * @param stack Pointer to the stack
 * @return Number of elements in the stack
 *
 * Handles circular list detection to avoid infinite loops.
 */
int	list_size(t_swap *stack)
{
	int		i;
	t_swap	*temp_list;

	if (!stack)
		return (0);
	i = 0;
	temp_list = stack;
	while (temp_list)
	{
		i++;
		if (temp_list->next == stack)
			break ;
		temp_list = temp_list->next;
	}
	return (i);
}

/**
 * @brief Find the minimum value in the stack
 * @param stack Pointer to the stack
 * @return Minimum value, or 0 if stack is empty
 *
 * Traverses the entire stack to find the smallest value.
 */
int	get_min_value(t_swap *stack)
{
	t_swap	*temp_list;
	int		min_value;

	if (!stack)
		return (0);
	temp_list = stack;
	min_value = temp_list->value;
	while (temp_list)
	{
		if (temp_list->value < min_value)
			min_value = temp_list->value;
		temp_list = temp_list->next;
	}
	return (min_value);
}
