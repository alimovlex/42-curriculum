/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:21:40 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:38:26 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_striteri
 *
 * Applies the function ’f’ to each character of the 
 * string passed as argument, passing its index as 
 * the first argument. Each character is passed by
 * address to ’f’ so it can be modified if necessary.
 *
 * @param [s]: The string to iterate over.
 * @param [c]: The function to apply to each character.
 *
 * @returns nothing.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
