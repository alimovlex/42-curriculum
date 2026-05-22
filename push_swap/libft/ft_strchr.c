/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:20:43 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 13:00:42 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_strchr
 *
 * The ft_strchr() function locates the first occurrence of c
 * (converted to a char) in the string pointed to by s.
 * The terminating null character is considered part of the string;
 * therefore if c is `\0', the function locates the terminating `\0'.
 * The ft_strchr() function returns a pointer to the first occurrence of the
 * character c in the string s.
 *
 * @param [s]: string to find a character in.
 * @param [c]: character to be found in the string [s].
 *
 * @returns The function ft_strchr() returns a pointer to the located character,
 * or NULL if the character does not appear in the string.
 * The ft_strchr() function returns a pointer to the matched character or NULL
 * if the character is not found. The terminating null byte is considered part
 * of the string, so that if c is specified as '\0', these functions
 * return a pointer to the terminator.
 * @retval  0 if the character does not appear in the string.
 * @retval  a pointer to the located character.
 */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
