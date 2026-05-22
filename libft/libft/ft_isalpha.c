/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:15:45 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:04 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isalpha
 *
 * The ft_isalpha() function tests for any character for which
 * ft_isupper(3), or ft_islower(3), is true.
 * The value of the argument must be representable
 * as an unsigned char or the value of EOF.
 * The ft_isalpha() function checks for an alphabetic character;
 * in the standard "C" locale,
 * it is equivalent to (ft_isupper(c) || ft_islower(c)).
 *
 * @param [c]: character to test.
 *
 * @returns The ft_isalpha() function returns zero
 * if the character tests false
 * and returns non-zero if the character tests true.
 * @retval  0 if the character tests false.
 * @retval  non-zero if the character tests true.
 */

int	ft_isalpha(int c)
{
	if (c == '\0')
		return (0);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
