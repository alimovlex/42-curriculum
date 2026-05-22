/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:16:34 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:42:17 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isdigit
 *
 * The ft_isdigit() function tests for a decimal digit character.
 * Regardless of locale, this includes the following characters only:
 * ``0'' ``1''``2''``3''``4'' ``5'' ``6''``7''``8''``9''
 * The ft_isdigit() function checks for a digit (0 through 9).
 *
 * @param [c]: character to test.
 *
 * @returns The ft_isdigit() function returns zero
 * if the character tests false and returns non-zero
 * if the character tests true.
 * @retval  0 if the character tests false.
 * @retval  non-zero if the character tests true.
 */

int	ft_isdigit(int c)
{
	if (c == '\0')
		return (0);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
