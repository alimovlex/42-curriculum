/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:20:02 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:58 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_memmove
 *
 * The ft_memmove() function copies len bytes from string src to string dest.
 * The two strings may overlap; a copy's always done in a non-destructive manner.
 * The ft_memmove() function copies n bytes from mem. area src to mem. area dest.
 * The mem. areas may overlap: copying takes place as though the bytes in src are
 * first copied into a temporary array that does not overlap src or dest,
 * and the bytes are then copied from the temporary array to dest.
 *
 * @param [dest]: buffer to copy n bytes to.
 * @param [src]: buffer to copy n bytes from.
 * @param [n]: length or amount of bytes to be written to buffer [dst].
 *
 * @returns The ft_memmove() function returns the original value of dest.
 * The ft_memmove() function returns a pointer to dest.
 * @retval  a pointer to dest.
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdest;

	csrc = ((unsigned char *)src);
	cdest = ((unsigned char *)dst);
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			cdest[len] = csrc[len];
		return (cdest);
	}
	else
		return (ft_memcpy(dst, src, len));
}
