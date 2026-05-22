/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:21:26 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:38:07 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

void	free_split(char **split, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**fill(char const *s, char c, char **split)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (ft_wordlen(s, c) == 0)
			split[i] = NULL;
		else
		{
			split[i] = malloc((ft_wordlen(s, c) + 1) * sizeof(char));
			if (split[i] == NULL)
			{
				free_split(split, wordcount(s, c) + 1);
				return (NULL);
			}
			ft_strlcpy(split[i], s, ft_wordlen(s, c) + 1);
		}
		s = s + ft_wordlen(s, c);
		i++;
	}
	return (split);
}
/**
 * @brief ft_split
 *
 * Allocates memory (using malloc(3)) and returns an 
 * array of strings obtained by splitting ’s’ using
 * the character ’c’ as a delimiter. The array must
 * end with a NULL pointer.
 *
 * @param [s]: The string to be split.
 * @param [c]: The delimiter character.
 *
 * @returns The array of new strings resulting from the split. 
 * NULL if the allocation fails.
 * @retval  an array of new strings resulting from the split.
 * @retval  NULL if the allocation fails.
 */

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	split = calloc((wordcount(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	return (fill(s, c, split));
}
