/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:16:13 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:11 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isascii
 *
 * The ft_isascii() function shall test whether c
 * is a 7-bit US-ASCII character code.
 * The ft_isascii() function is defined on all integer values.
 * The ft_isascii() function checks whether c
 * is a 7-bit unsigned char value that fits into the ASCII character set.
 *
 * @param [c]: character to test.
 *
 * @returns The ft_isascii() function shall return non-zero
 * if c is a 7-bit US-ASCII character code between 0 and 127 inclusive;
 * otherwise, it shall return 0.
 * @retval  0 if the character tests false.
 * @retval  non-zero if c is a 7-bit US-ASCII character code [0...127]
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
