/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:19:36 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 18:15:41 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long int n)
{
	int	length;

	length = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*convert(unsigned int n, int neg, char *num)
{
	while (n > 0)
	{
		num[ft_intlen(n) - 1 + neg] = ((n % 10) + 48);
		n = n / 10;
	}
	return (num);
}
/**
 * @brief ft_itoa
 *
 * Allocates memory (using ft_calloc(3)) and returns a string representing
 * the integer received as an argument. Negative numbers must be handled.
 *
 * @param [n]: The integer to convert.
 *
 * @returns a string representing the integer received as an argument
 * @retval  a string representing the integer received as an argument.
 * @retval  NULL if, the allocation fails.
 */

char	*ft_itoa(int n)
{
	char	*num;
	int		neg;
	long	ntmp;

	neg = 0;
	ntmp = n;
	if (n < 0)
	{
		ntmp *= -1;
		neg = 1;
	}
	num = (char *)ft_calloc(ft_intlen(ntmp) + 1 + neg, sizeof(char));
	if (num == NULL)
		return (NULL);
	if (ntmp == 0)
	{
		num[0] = '0';
		return (num);
	}
	if (n < 0)
		num[0] = '-';
	return (convert(ntmp, neg, num));
}
