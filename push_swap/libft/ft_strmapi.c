/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:22:02 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 08:35:17 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_charset(unsigned int c, char n)
{
	n = (unsigned int)n;
	while (n > 0)
	{
		n = c;
		n--;
	}
	return (c);
}
/**
 * @brief ft_strmapi
 *
 * Applies the function f to each character of the
 * string s, passing its index as the first argument
 * and the character itself as the second. A new
 * string is created (using malloc(3)) to store the
 * results from the successive applications of f.
 *
 * @param [s]: The string to iterate over.
 * @param [f]: The function to apply to each character.
 *
 * @returns The string created from the successive applications of ’f’.
 * @retval  The string created from the successive applications of ’f’.
 * @retval  NULL if the allocation fails.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (0);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
