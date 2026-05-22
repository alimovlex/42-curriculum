/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:21:14 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 12:56:47 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_strlcat
 *
 * ft_strlcat() appends string src to the end of dst. It will append at most
 * (dstsize - strlen(dst) -	1) characters. It will then NUL-terminate, unless 
 * dstsize is 0 or the original dst string was longer than dstsize
 * (in practice this should not happen as it means that either dstsize is
 * incorrect or that dst is	not a proper string).
 * If the src and dst strings overlap, the behavior	is undefined.
 *
 * @param [dst]: string to be appended by src.
 * @param [src]: string to be appended to dst.
 * @param [size]: the amount of bytes to be traversed in strings.
 *
 * @returns The ft_strlcat() function returns the total length of the string 
 * that tries to create or the initial length of dst plus the length of src. 
 * While this may seem somewhat confusing, it was done to detect truncation.
 * Note, however, that if ft_strlcat() traverses size characters without 
 * finding a NUL, the length of the string is considered to be size and 
 * the destination string will not be NUL-terminated 
 * (since there was no space for the NUL). This keeps ft_strlcat() from running 
 * off the end of a string. In practice this should not happen (as it means that 
 * either size is incorrect or that dst is not a proper “C” string). 
 * The check exists to prevent potential security problems in incorrect code.
 * @retval  length of the string that tries to create or 
 * the initial length of dst plus the length of src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizeofdst;
	size_t	sizeofsrc;
	size_t	i;

	i = 0;
	sizeofdst = ft_strlen(dst);
	sizeofsrc = ft_strlen(src);
	if (size < sizeofdst)
		return (sizeofsrc + size);
	while (src[i] != '\0' && sizeofdst + 1 < size)
	{
		dst[sizeofdst + i] = src[i];
		i++;
		size--;
	}
	dst[sizeofdst + i] = '\0';
	return (sizeofdst + sizeofsrc);
}
