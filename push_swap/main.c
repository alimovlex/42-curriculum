/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:26:49 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:26:50 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int total, char **argv)
{
	t_swap	*stack_a;
	t_swap	*stack_b;

	if (total < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	argv = handle_args(argv);
	prepare_stack(&stack_a, argv);
	start_sorting(&stack_a, &stack_b);
	return (0);
}
