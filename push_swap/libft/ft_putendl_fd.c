/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:20:07 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:37:43 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_putendl_fd
 *
 * Outputs the string ’s’ to the specified file descriptor 
 * followed by a newline.
 *
 * @param [s]: The string to output.
 * @param [fd]: The file descriptor on which to write.
 *
 * @returns nothing.
 */
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
