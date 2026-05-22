/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:02:10 by alalimov          #+#    #+#             */
/*   Updated: 2025/11/17 18:03:01 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Prints a pointer address in hexadecimal format.
 * @param number The pointer address to print.
 * @param format The format specifier ('x' or 'X').
 * @return The number of characters printed.
 */
int	ft_put_ptr(unsigned long number, char format)
{
	int				length;
	char			result;
	unsigned int	base;
	unsigned int	border;

	length = 0;
	base = 16;
	border = 10;
	if (number / base > 0)
		length = ft_put_ptr(number / base, format);
	number = number % base;
	if (number < border)
		result = number + '0';
	else
		result = number + format - '!';
	write(1, &result, 1);
	length++;
	return (length);
}
