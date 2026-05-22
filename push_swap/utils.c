/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:28:15 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/24 09:28:46 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Find the next minimum value greater than given value
 * @param stack Pointer to the stack
 * @param min_value Current minimum value
 * @return Next smallest value greater than min_value
 *
 * Used during index assignment to find values in ascending order.
 * Returns INT_MAX if no greater value exists.
 */
int	next_min_value(t_swap *stack, int min_value)
{
	t_swap	*temp_list;
	int		next_min_value;

	temp_list = stack;
	next_min_value = INT_MAX;
	while (temp_list)
	{
		if (temp_list->value > min_value && temp_list->value < next_min_value)
			next_min_value = temp_list->value;
		temp_list = temp_list->next;
	}
	return (next_min_value);
}

/**
 * @brief Convert and concatenate arguments into single string
 * @param args Array of argument strings
 * @return Concatenated string with space separators
 *
 * Combines all argument strings into one, separated by spaces.
 * Exits with error on allocation failure.
 */
char	*convert_args(char **argv)
{
	char		*temp;
	char		*result;
	static int	i = 0;

	result = ft_strdup("");
	if (!result)
		print_error();
	while (argv[++i])
	{
		temp = result;
		result = ft_strjoin(result, argv[i]);
		free(temp);
		if (!result)
			print_error();
		temp = result;
		result = ft_strjoin(result, " ");
		free(temp);
		if (!result)
			print_error();
	}
	return (result);
}

/**
 * @brief Free array of argument strings
 * @param args Array of strings to free
 *
 * Frees each string in the array, then frees the array itself.
 * Handles NULL pointers safely.
 */
void	free_args(char **argv)
{
	int	i;

	i = 0;
	if (!argv || !*argv)
		return ;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

/**
 * @brief Print error message and exit program
 *
 * Writes "Error\n" to stderr and exits with EXIT_FAILURE.
 * Called when invalid input or fatal error is encountered.
 */
void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
