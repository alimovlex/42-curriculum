/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:30:45 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:07:28 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_toupper
 *
 * The ft_toupper() function converts a lower-case letter to the corresponding 
 * upper-case letter. The argument must be representable as an unsigned char
 * or the value of EOF.
 *
 * @param [c]: character to upper-case.
 *
 * @returns If the argument is a lower-case letter, the ft_toupper() function 
 * returns the corresponding upper-case letter if there is one;
 * otherwise, the argument is returned unchanged.
 * @retval  the corresponding lower-case letter if there is one.
 * @retval  unchanged, if the argument is NOT a lower-case letter.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
