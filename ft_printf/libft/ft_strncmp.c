/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:22:11 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:07:35 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_strncmp
 *
 * The ft_strncmp() function lexicographically compare the null-terminated 
 * strings s1 and s2.
 * The ft_strncmp() function compares not more than len characters. 
 * Because ft_strncmp() is designed for comparing strings rather 
 * than binary data, characters that appear after a `\0' character 
 * are not compared.
 *
 * @param [s1]: first string to compare.
 * @param [s2]: second string to compare.
 * @param [len]: length of characters to be compared in strings.
 *
 * @returns The ft_strncmp() function returns an integer indicating 
 * the result of the comparison and it just compares only the first (at most) 
 * n bytes of s1 and s2.
 * The ft_strncmp() function returns an integer greater than, equal to, 
 * or less than 0, according as the string s1 is greater than, equal to, 
 * or less than the string s2.
 * The comparison is done using unsigned characters, so that `\200' 
 * is greater than `\0'.
 * The ft_strncmp() function returns an integer less than, equal to, 
 * or greater than zero if s1 (or the first n bytes thereof) is found, 
 * respectively, to be less than, to match, or be greater than s2.
 *
 * @retval  0 if the s1 and s2 are equal (s1 == s2);
 * @retval  a negative value if s1 is less than s2 (s1 < s2);
 * @retval  a positive value if s1 is greater than s2 (s1 > s2).
 */

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < len))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
