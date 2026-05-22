/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:20:21 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:43:08 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_memset
 *
 * The ft_memset() function	writes len bytes of value c
 * (converted to an unsigned char) to the string dest.
 * Undefined behaviour from ft_memset(), resulting from storage overflow,
 * will occur if len is greater than the length of the dest buffer.
 * The behavior is also undefined if dest is an invalid pointer.
 * The ft_memset() function fills the first n bytes of the memory area
 * pointed to by dest with the constant byte c.
 *
 * @param [dest]: buffer where the bytes 'c' are written.
 * @param [c]: int value to be written to.
 * @param [len]: length or amount of bytes to be written to buffer [dest].
 *
 * @returns The ft_memset() function returns its first argument.
 * The ft_memset() function returns a pointer to the memory area dest.
 * @retval a pointer to the memory area dest.
 */

void	*ft_memset(void *dest, int c, size_t len)
{
	while (len)
	{
		*((unsigned char *)dest + len -1) = (unsigned char)c;
		len--;
	}
	return (dest);
}
