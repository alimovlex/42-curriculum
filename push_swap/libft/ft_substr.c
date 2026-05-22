/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:28:03 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 18:07:43 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_substr
 *
 * Allocates memory (using malloc(3)) and returns a
 * substring from the string ’s’. 
 * The substring starts at index ’start’ and has a
 * maximum length of ’len’.
 *
 * @param [s]:     The original string where the substring is created.
 * @param [start]: The starting index of the substring within ’s’.
 * @param [len]:   The maximum length of the substring.
 *
 * @returns The substring or NULL if the allocation fails.
 * @retval  The substring.
 * @retval  NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s + start) > len)
	{
		sub = malloc((len + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, s + start, len + 1);
	}
	else
	{
		sub = malloc((ft_strlen(s + start) + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, s + start, ft_strlen(s + start) + 1);
	}
	return (sub);
}
