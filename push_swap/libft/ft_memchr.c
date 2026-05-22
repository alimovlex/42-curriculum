/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:17:28 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:36 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_memchr
 *
 * The ft_memchr() function locates the first occurrence of c 
 * (converted to an unsigned char) in string s.
 * The ft_memchr() function scans the initial n bytes of the memory 
 * area pointed to by s for the first instance of c. Both c and 
 * the bytes of the memory area pointed to by s are interpreted as unsigned char.
 *
 * @param [s]: buffer to locate first occurence of c.
 * @param [c]: character to find in a buffer [s].
 * @param [n]: amount of bytes to scan in the buffer [s].
 *
 * @returns The ft_memchr() function returns a pointer to the byte located,
 * or NULL if no such byte exists within n bytes.
 * The ft_memchr() function returns a pointer to the matching byte or NULL
 * if the character does not occur in the given memory area.
 * @retval a pointer to the matching byte
 * @retval NULL if the character does not occur in the given memory area.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
