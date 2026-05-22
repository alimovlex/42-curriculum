/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:18:01 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:40 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_memcmp
 *
 * The ft_memcmp() function compares byte string s1 against byte string s2.
 * Both strings are	assumed	to be len bytes	long.
 * The ft_memcmp() function compares the first n bytes
 * (each interpreted as unsigned char) of the memory areas s1 and s2.
 *
 * @param [s1]: byte string to compare.
 * @param [s2]: byte string to compare.
 * @param [len]: byte string to compare.
 *
 * @returns The ft_memcmp() function returns 0 if the 2 strings are identical,
 * otherwise returns the difference between the first two differing bytes
 * (treated	as unsigned char values, so that `\200'	is greater than	 `\0',
 * for example). Zero-length strings are always identical.
 * The memcmp() function returns an integer less than, equal to,
 * or greater than zero if the first n bytes of s1 is found, respectively,
 * to be less than, to match, or be greater than the first n bytes of s2.
 * For a nonzero return value, the sign is determined by the sign of
 * the difference between the first pair of bytes (interpreted as unsigned char)
 * that differ in s1 and s2. If n is zero, the return value is zero.
 * @retval 0 if the two strings are identical.
 * @retval 0 if argument [n] is zero.
 * @retval difference between the first two differing bytes.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_one;
	unsigned char	*str_two;
	size_t			i;

	i = 0;
	str_one = (unsigned char *)s1;
	str_two = (unsigned char *)s2;
	while (i < n)
	{
		if (str_one[i] > str_two[i])
			return (1);
		else if (str_one[i] < str_two[i])
			return (-1);
		i++;
	}
	return (0);
}
