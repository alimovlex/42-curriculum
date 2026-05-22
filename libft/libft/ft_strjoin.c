/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:21:51 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 18:10:42 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_strjoin
 *
 * Allocates memory (using malloc(3)) and returns a new string, 
 * which is the result of concatenating ’s1’ and ’s2’.
 *
 * @param [s1]: The prefix string.
   @param [s2]: The suffix string.
 *
 * @returns The new string or NULL if the allocation fails.
 * @retval  The new string.
 * @retval  NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;

	newstr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!newstr)
	{
		return (NULL);
	}
	ft_strlcpy(newstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(newstr, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return (newstr);
}
