/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:30:12 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 13:01:41 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_strrchr
 *
 * The ft_strrchr() function locates the last occurrence of c 
 * (converted to a char) in the string
 * pointed to by s. The terminating null character is considered 
 * part of the string; therefore if c is `\0', the function locates 
 * the terminating `\0'.
 * The ft_strrchr() function returns a pointer to the first occurrence of the
 * character c in the string s.
 *
 * @param [s]: string to find a character in.
 * @param [c]: character to be found in the string [s].
 *
 * @returns The function ft_strrchr() returns a pointer to the located character,
 * or NULL if the character does not appear in the string. The ft_strrchr() 
 * function returns a pointer to the matched character or NULL if the character 
 * is not found. The terminating null byte is considered part of the string, 
 * so that if c is specified as '\0', these functions return a pointer to the 
 * terminator.
 * @retval  0 if the character does not appear in the string.
 * @retval  a pointer to the located character.
 */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
