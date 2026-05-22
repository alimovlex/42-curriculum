/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:30:28 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:07:25 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_tolower
 *
 * The tolower() function converts an upper-case letter to the corresponding 
 * lower-case letter. The argument must be representable as an unsigned char 
 * or the value of EOF.
 *
 * @param [c]: character to lower-case.
 *
 * @returns If the argument is an upper-case letter, the ft_tolower() function 
 * returns the corresponding lower-case letter if there is one;
 * otherwise, the argument is returned unchanged.
 * @retval  the corresponding lower-case letter if there is one.
 * @retval  unchanged, if the argument is NOT an upper-case letter.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
