/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:55:18 by alalimov          #+#    #+#             */
/*   Updated: 2025/11/17 17:56:07 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int number, char format)
{
	int				length;
	char			result;
	unsigned int	base;
	unsigned int	border;

	length = 0;
	base = 16;
	border = 10;
	if (number / base > 0)
		length = ft_put_hex(number / base, format);
	number = number % base;
	if (number < border)
		result = number + '0';
	else
		result = number + format - '!';
	write(1, &result, 1);
	length++;
	return (length);
}
