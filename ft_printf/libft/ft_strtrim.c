/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:22:13 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 18:12:01 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isinset(char c, char const *set)
{
	bool	r;
	size_t	j;

	j = 0;
	r = false;
	while (j < ft_strlen(set))
	{
		if (c == set[j])
		{
			r = true;
		}
		j++;
	}
	return (r);
}
/**
 * @brief ft_strtrim
 *
 * Allocates memory (using malloc(3)) and returns a 
 * copy of ’s1’ with characters from ’set’ removed
 * from the beginning and the end.
 *
 * @param [s1]:  The string to be trimmed.
 * @param [set]: The string containing the set of characters to be removed.
 *
 * @returns The trimmed string or NULL if the allocation fails.
 * @retval  The trimmed string.
 * @retval  NULL if the allocation fails.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*trimmedstr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	size = ft_strlen(s1);
	i = 0;
	j = ft_strlen(s1);
	while (isinset(s1[i], set) && size > i)
		i++;
	while (isinset(s1[j - 1], set) && j > i)
		j--;
	trimmedstr = malloc(j - i + 1);
	if (trimmedstr == NULL)
		return (NULL);
	ft_strlcpy(trimmedstr, s1 + i, j - i + 1);
	trimmedstr[j - i + 1] = '\0';
	return (trimmedstr);
}
