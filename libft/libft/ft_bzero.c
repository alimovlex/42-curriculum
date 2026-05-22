/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:43:06 by alalimov          #+#    #+#             */
/*   Updated: 2026/04/13 02:54:21 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_bzero
 *
 * The ft_bzero() function erases the data in the n bytes of the memory starting
 * at the location pointed to by b, by writing zeros (bytes containing '\0')
 * to that area. The bzero() function writes len zero bytes to the string b.
 * If len is zero, ft_bzero() does nothing.
 *
 * @param [b]: buffer to convert.
 * @param [len]: buffer length.
 *
 * @returns nothing.
 */
void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, 0, len);
}
