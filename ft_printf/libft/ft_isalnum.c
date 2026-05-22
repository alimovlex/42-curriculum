/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:15:06 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:00 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isalnum
 *
 * The ft_isalnum() function checks for an alphanumeric character;
 * it is equivalent to (ft_isalpha(c) || ft_isdigit(c)).
 * The value of the argument must be representable as an unsigned char
 * or the value of EOF.
 *
 * @param [c]: character to test.
 *
 * @returns The ft_isalnum() function returns zero
 * if the character tests false and return
 * non-zero if the character tests true.
 * @retval  0 if the character tests false.
 * @retval  non-zero if the character tests true.
 */

int	ft_isalnum(int c)
{
	if (c == '\0')
		return (0);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
