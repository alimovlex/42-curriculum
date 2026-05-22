/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:18:21 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:48 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_memcpy
 *
 * The ft_memcpy() function copies len bytes from string src to string dst.
 * If src and dst overlap, the results are not defined.
 * The ft_memcpy() function copies n bytes from memory area src
 * to memory area dst.
 * The memory areas must not overlap. Use ft_memmove(3) if the memory areas
 * do overlap.
 *
 * @param [dst]: buffer to copy n bytes to.
 * @param [src]: buffer to copy n bytes from.
 * @param [n]: length or amount of bytes to be written to buffer [dst].
 *
 * @returns The memcpy() function returns the original value of dst.
 * The ft_memcpy() function returns a pointer to dst.
 * @retval  a pointer to dst.
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
