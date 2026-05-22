/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:21:04 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 07:37:58 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_putstr_fd
 *
 * Outputs the string ’s’ to the specified file descriptor.
 *
 * @param [s]: The string to output.
 * @param [fd]: The file descriptor on which to write.
 *
 * @returns nothing.
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
