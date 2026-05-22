/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:23:51 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/27 08:56:42 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_strnstr
 *
 * The ft_strnstr() function locates the first occurrence of the null-terminated 
 * string little in string big, where not more than len characters are searched.
 * Characters that appear after	a [`\0'] character are not searched. 
 * Since the strnstr() function is a FreeBSD specific API,
 * it should only be used when portability is not a	concern.
 *
 * @param [big]: 
 * @param [little]: 
 * @param [len]: 
 *
 * @returns If little is an empty string, big is returned; 
 * if little occurs nowhere in big, NULL is returned; 
 * otherwise a pointer to the first character of
 * the first occurrence of little is returned.
 *
 * @retval  0 if the s1 and s2 are equal (s1 == s2);
 * @retval  a negative value if s1 is less than s2 (s1 < s2);
 * @retval  a positive value if s1 is greater than s2 (s1 > s2).
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
