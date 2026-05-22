/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:27:29 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:27:31 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Check for duplicate values in the stack
 * @param stack_a Pointer to stack A
 * @param args Array of argument strings
 * @param value Value to check for duplicates
 *
 * Exits with error if duplicate found.
 */
void	check_duplicates(t_swap *stack_a, char **args, int value)
{
	t_swap	*temp;

	temp = stack_a;
	while (temp)
	{
		if (temp->value == value)
		{
			free_args(args);
			free_list(stack_a);
			print_error();
		}
		temp = temp->next;
	}
}

/**
 * @brief Parse and handle sign character in number string
 * @param number String containing the number
 * @param i Pointer to current index in string
 * @param sign Pointer to sign value (1 or -1)
 *
 * Updates index and sign if +/- character is found.
 */
void	found_sign(char *number, size_t *i, int *sign)
{
	if (number[*i] == '-' || number[*i] == '+')
	{
		if (number[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

/**
 * @brief Validate if string represents a valid integer
 * @param number String to validate
 * @return 1 if valid number, 0 otherwise
 *
 * Checks:
 * - String is not empty
 * - Contains only digits (and optional sign)
 * - Value is within INT_MIN and INT_MAX range
 */
int	is_valid_number(char *number)
{
	size_t	i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	if (!number[i])
		return (0);
	found_sign(number, &i, &sign);
	while (number[i])
	{
		if (!ft_isdigit(number[i]))
			return (0);
		if (number[i] >= '0' && number[i] <= '9')
			result = result * 10 + (number[i] - '0');
		i++;
	}
	result *= sign;
	if (ft_strlen(number) != i || result < INT_MIN || result > INT_MAX)
		return (0);
	return (1);
}

/**
 * @brief Process and validate command-line arguments
 * @param args Array of argument strings
 * @return Array of validated number strings
 *
 * Steps:
 * 1. Convert all args into single string
 * 2. Split by spaces into individual numbers
 * 3. Validate each number
 * 4. Return validated array or exit on error
 */
char	**handle_args(char **argv)
{
	char	*temp;
	int		i;

	i = 0;
	temp = convert_args(argv);
	if (!temp)
		print_error();
	argv = ft_split(temp, ' ');
	if (!argv)
		print_error();
	free(temp);
	while (argv[i])
	{
		if (!is_valid_number(argv[i]))
		{
			free_args(argv);
			print_error();
		}
		i++;
	}
	return (argv);
}

/**
 * @brief Build stack A from validated arguments
 * @param stack_a Double pointer to stack A
 * @param args Array of validated number strings
 *
 * For each argument:
 * 1. Check for duplicates
 * 2. Create new node with value
 * 3. Set index to -1 (unindexed)
 * 4. Add to back of stack
 *
 * After building, assigns normalized indexes to all elements.
 */
void	prepare_stack(t_swap **stack_a, char **args)
{
	t_swap	*new_node;
	int		i;

	i = 0;
	while (args[i])
	{
		check_duplicates(*stack_a, args, ft_atoi(args[i]));
		new_node = new_list(ft_atoi(args[i]));
		if (!new_node)
		{
			free_args(args);
			free_list(*stack_a);
			print_error();
		}
		new_node->index = -1;
		push_back(stack_a, new_node);
		i++;
	}
	if (args)
		free_args(args);
	while (!all_indexed(*stack_a))
		set_index(*stack_a);
}
