/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:53:23 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:41:55 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_calloc
 *
 * The ft_calloc() function allocates space for number objects, each size
 * bytes in	length.	The result is identical	to calling ft_malloc() with an
 * argument	of (number*size), with the exception that the allocated memory
 * is explicitly initialized to zero bytes.
 * The ft_calloc() function allocates memory for an array of n elements of 
 * size bytes each and returns a pointer to the allocated memory. 
 * The memory is set to zero. 
 * If n or size is 0, then ft_calloc() returns a unique pointer value 
 * that can later be successfully passed to free().
 * If the multiplication of n and size would result in integer overflow, 
 * then ft_calloc() returns an error. 
 *
 * @param [number]: number of bytes/elements to be allocated in a buffer
 * @param [size]: buffer size 
 *
 * @returns The ft_malloc() functions returns a pointer to the allocated
 * memory if successful; otherwise a NULL pointer is returned and errno 
 * is set to ENOMEM.
 * @retval  a pointer to the allocated memory if successful.
 * @retval  NULL if failed.
 */

void	*ft_calloc(size_t number, size_t size)
{
	size_t	total;
	void	*buf;

	total = (number * size);
	if (total == 0)
	{
		buf = NULL;
		if (!buf)
			return (NULL);
		else
			return (buf);
	}
	buf = malloc(total);
	if (!buf)
		return (NULL);
	ft_bzero(buf, total);
	return (buf);
}
