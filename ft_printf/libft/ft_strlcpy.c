/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:21:41 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 12:54:36 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_strlcpy
 *
 * ft_strlcpy() copies up to (dstsize -	1) characters from the string src to
 * dst, NUL-terminating the	result if dstsize is not 0.
 * The ft_strlcpy() function copies up to size - 1 characters from the 
 * NUL-terminated string src to dst, NUL-terminating the result.
 * If the src and dst strings overlap, the behavior	is undefined.
 *
 * @param [dst]: string to be copied to from src.
 * @param [src]: string to be copied from.
 * @param [dstsize]: the amount of bytes to be traversed in strings.
 *
 * @returns The ft_strlcpy() function returns the total length of the string 
 * they tried to create. For ft_strlcpy() that means the length of src.
 * @retval  length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize - 1 > i && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
