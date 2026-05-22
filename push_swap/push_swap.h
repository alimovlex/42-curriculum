/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:27:38 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:27:39 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <limits.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "ft_printf.h"

typedef struct s_swap
{
	int				value;
	int				index;
	struct s_swap	*next;
	struct s_swap	*prev;
}	t_swap;

int		all_indexed(t_swap *stack);
void	set_index(t_swap *stack);
int		get_min_index(t_swap *stack);
int		is_sorted(t_swap **stack);
t_swap	*get_last_list(t_swap *list);
void	free_list(t_swap *stack);
void	sort_stack(t_swap **stack_a, t_swap **stack_b);
void	free_args(char **argv);
t_swap	*new_list(int value);
void	push_front(t_swap **stack, t_swap *new_node);
void	push_back(t_swap **stack, t_swap *new_node);
int		list_size(t_swap *stack);
int		get_min_value(t_swap *stack);
void	rotate_a(t_swap **stack_a);
void	rotate_b(t_swap **stack_b);
void	rotate_a_and_b(t_swap **stack_a, t_swap **stack_b);
void	reverse_rotate_a(t_swap **stack_a);
void	reverse_rotate_b(t_swap **stack_b);
void	swap_a(t_swap **stack_a);
void	swap_b(t_swap **stack_b);
void	swap_a_and_b(t_swap **stack_a, t_swap **stack_b);
void	push_a(t_swap **stack_a, t_swap **stack_b);
void	push_b(t_swap **stack_a, t_swap **stack_b);
void	prepare_stack(t_swap **stack_a, char **args);
char	**handle_args(char **argv);
void	start_sorting(t_swap **stack_a, t_swap **stack_b);
void	swap(t_swap **stack);
void	push(t_swap **stack_a, t_swap **stack_b);
void	rotate(t_swap **stack);
void	reverse_rotate(t_swap **stack);
int		next_min_value(t_swap *stack, int min_value);
void	print_error(void);
char	*convert_args(char **argv);
