/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:27:56 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:27:58 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Swap the first two elements of a stack
 * @param stack Double pointer to the stack
 *
 * Exchanges positions of top two elements, maintaining all links.
 * Does nothing if stack has fewer than 2 elements.
 */
void	swap(t_swap **stack)
{
	t_swap	*temp_a;
	t_swap	*temp_b;
	t_swap	*temp_c;

	if (!stack || !(*stack)->next)
		return ;
	temp_a = *stack;
	temp_b = (*stack)->next;
	temp_c = (*stack)->next->next;
	*stack = temp_b;
	temp_b->next = temp_a;
	temp_b->prev = NULL;
	temp_a->next = temp_c;
	temp_a->prev = temp_b;
	if (temp_c)
		temp_c->prev = temp_a;
}

/**
 * @brief Push top element from one stack to another
 * @param stack_a Double pointer to source stack
 * @param stack_b Double pointer to destination stack
 *
 * Removes top element from stack_a and adds it to front of stack_b.
 * Does nothing if source stack is empty.
 */
void	push(t_swap **stack_a, t_swap **stack_b)
{
	t_swap	*temp_list;

	if (!stack_a || !stack_b || !*stack_a)
		return ;
	temp_list = *stack_a;
	*stack_a = (*stack_a)->next;
	temp_list->next = NULL;
	temp_list->prev = NULL;
	push_front(stack_b, temp_list);
}

/**
 * @brief Rotate stack up (first element becomes last)
 * @param stack Double pointer to the stack
 *
 * Moves top element to the bottom of the stack.
 * All other elements shift up by one position.
 */
void	rotate(t_swap **stack)
{
	t_swap	*temp_list;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp_list = *stack;
	*stack = (*stack)->next;
	temp_list->next = NULL;
	temp_list->prev = NULL;
	push_back(stack, temp_list);
}

/**
 * @brief Rotate stack down (last element becomes first)
 * @param stack Double pointer to the stack
 *
 * Moves bottom element to the top of the stack.
 * All other elements shift down by one position.
 */
void	reverse_rotate(t_swap **stack)
{
	t_swap	*last_list;
	t_swap	*first;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last_list = *stack;
	while (last_list->next)
		last_list = last_list->next;
	first = last_list->prev;
	first->next = NULL;
	last_list->prev = NULL;
	push_front(stack, last_list);
}
