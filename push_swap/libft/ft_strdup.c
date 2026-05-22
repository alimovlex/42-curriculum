/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:35:25 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:21:09 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_strdup
 *
 * The ft_strdup() function	allocates sufficient memory for a copy of the
 * string str, does	the copy, and returns a	pointer	to it. The memory is
 * allocated with malloc(3) and should be released with free(3) when no
 * longer needed.
 * The ft_strdup() function returns a pointer to a new string which is a 
 * duplicate of the string s. Memory for the new string is obtained 
 * with malloc(3), and can be freed with free(3).
 *
 * @param [str]: string to duplicate.
 *
 * @returns If insufficient	memory is available, NULL is returned 
 * and errno is set to ENOMEM. Otherwise, the ft_strdup() function 
 * returns a pointer to the copied string.
 * On success, the ft_strdup() function returns a pointer 
 * to the duplicated string. It returns NULL if insufficient memory was 
 * available, with errno set to indicate the error.
 * @retval  NULL if insufficient memory is available.
 * @retval  a pointer to the duplicated string.
 */
char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*dst;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	dst = (char *)malloc(sizeof(*str) * (len + 1));
	if (dst == 0)
		return (NULL);
	else
	{
		while (i < len)
		{
			dst[i] = str[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
