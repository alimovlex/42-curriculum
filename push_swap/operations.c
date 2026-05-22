/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:27:16 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:27:18 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Swap first two elements of stack A (sa operation)
 * @param stack_a Double pointer to stack A
 *
 * Calls low-level swap() and prints "sa".
 */
void	swap_a(t_swap **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	swap(stack_a);
	ft_printf("sa\n");
}

/**
 * @brief Swap first two elements of stack B (sb operation)
 * @param stack_b Double pointer to stack B
 *
 * Calls low-level swap() and prints "sb".
 */
void	swap_b(t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	swap(stack_b);
	ft_printf("sb\n");
}

/**
 * @brief Swap both stacks simultaneously (ss operation)
 * @param stack_a Double pointer to stack A
 * @param stack_b Double pointer to stack B
 *
 * Swaps top two elements of both stacks and prints "ss".
 */
void	swap_a_and_b(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next
		|| !stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

/**
 * @brief Push top element from B to A (pa operation)
 * @param stack_a Double pointer to stack A (destination)
 * @param stack_b Double pointer to stack B (source)
 *
 * Moves top element from B to top of A and prints "pa".
 */
void	push_a(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !stack_a)
		return ;
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

/**
 * @brief Push top element from A to B (pb operation)
 * @param stack_a Double pointer to stack A (source)
 * @param stack_b Double pointer to stack B (destination)
 *
 * Moves top element from A to top of B and prints "pb".
 */
void	push_b(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
