/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:33:14 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/04 21:40:24 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/**
 * @brief Prints a string.
 * @param print_size The current number of characters printed.
 * @param list The va_list containing the string to print.
 * @return The updated number of characters printed.
 */
int	print_string(int print_size, va_list list)
{
	char	*start_ptr;

	start_ptr = va_arg(list, char *);
	if (!start_ptr)
	{
		ft_putstr_fd("(null)", 1);
		print_size += 6;
	}
	else
	{
		print_size += (int)ft_strlen(start_ptr);
		ft_putstr_fd(start_ptr, 1);
	}
	return (print_size);
}

/**
 * @brief Prints a pointer address.
 * @param print_size The current number of characters printed.
 * @param list The va_list containing the pointer to print.
 * @return The updated number of characters printed.
 */
int	print_pointer(int print_size, va_list list)
{
	unsigned long	addr;

	addr = (unsigned long)va_arg(list, void *);
	if (!addr)
		print_size += write(1, "(nil)", 5);
	else
	{
		ft_putstr_fd("0x", 1);
		print_size += (int)ft_strlen("0x");
		print_size += ft_put_ptr(addr, 'x');
	}
	return (print_size);
}

/**
 * @brief Prints a signed integer.
 * @param print_size The current number of characters printed.
 * @param list The va_list containing the integer to print.
 * @return The updated number of characters printed.
 */
int	print_digit(int print_size, va_list list)
{
	int		start_index;
	char	*dynamic_str;

	start_index = va_arg(list, int);
	ft_putnbr_fd(start_index, 1);
	dynamic_str = ft_itoa(start_index);
	print_size += (int)ft_strlen(dynamic_str);
	free(dynamic_str);
	return (print_size);
}

/**
 * @brief Processes a format specifier and prints the corresponding value.
 * @param list The va_list containing the value to print.
 * @param format The format specifier.
 * @return The number of characters printed.
 */
int	ft_get_format(va_list list, const char format)
{
	int	print_size;

	print_size = 0;
	if (format == 'c')
	{
		ft_putchar_fd(va_arg(list, int), 1);
		print_size++;
	}
	else if (format == 's')
		print_size += print_string(print_size, list);
	else if (format == 'p')
		print_size += print_pointer(print_size, list);
	else if (format == 'd' || format == 'i')
		print_size += print_digit(print_size, list);
	else if (format == 'u')
		print_size = ft_put_unsigned(va_arg(list, unsigned int));
	else if (format == 'x' || format == 'X')
		print_size += ft_put_hex(va_arg(list, unsigned int), format);
	else if (format == '%')
	{
		ft_putchar_fd(format, 1);
		print_size++;
	}
	return (print_size);
}

/**
 * @brief A custom implementation of the printf function.
 * @param format The format string.
 * @param ... The values to print.
 * @return The number of characters printed.
 */
int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		print_size;

	if (format == NULL)
		return (-1);
	print_size = 0;
	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
			print_size += ft_get_format(list, *(++format));
		else
		{
			print_size += 1;
			ft_putchar_fd(*format, 1);
		}
		format++;
	}
	va_end(list);
	return (print_size);
}
