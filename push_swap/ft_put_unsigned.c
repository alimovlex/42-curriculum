/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:49:11 by alalimov          #+#    #+#             */
/*   Updated: 2025/11/17 17:54:01 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Prints an unsigned integer.
 * @param number The unsigned integer to print.
 * @return The number of characters printed.
 */
int	ft_put_unsigned(unsigned int number)
{
	int	length;

	length = 0;
	if (number / 10 > 0)
		length += ft_put_unsigned(number / 10);
	ft_putchar_fd((number % 10) + '0', 1);
	length++;
	return (length);
}
