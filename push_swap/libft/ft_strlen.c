/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:21:56 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:07:53 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_strlen
 *
 * The ft_strlen() function computes the length of the string s.
 * The ft_strlen() function calculates the length of the string pointed to by s,
 * excluding the terminating null byte ('\0').
 *
 * @param [s]: string to calculate the length.
 *
 * @returns The ft_strlen() function returns the number of characters 
 * that precede the terminating NUL character.
 * The ft_strlen() function returns the number of bytes in the string 
 * pointed to by s.
 * @retval  the number of characters that precede the terminating NUL character.
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
