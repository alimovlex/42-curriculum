/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:17:09 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:21 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isprint
 *
 * The ft_isprint() function tests for any printing character,
 * including space (` ').
 * The value of the argument must be representable as an unsigned char
 * or the value of EOF.
 * The ft_isprint() function checks for any printable character including space.
 *
 * @param [c]: character to test.
 *
 * @returns The ft_isprint() function returns zero
 * if the character tests false and
 * returns non-zero if the character tests true.
 * @retval  0 if the character tests false.
 * @retval  non-zero if the character tests true.
 */

int	ft_isprint(int c)
{
	if (c == '\0')
		return (0);
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
