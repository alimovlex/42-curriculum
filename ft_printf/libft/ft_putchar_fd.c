/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:19:55 by alalimov          #+#    #+#             */
/*   Updated: 2025/10/23 06:44:27 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief ft_putchar_fd
 *
 * Outputs the character ’c’ to the specified file descriptor.
 *
 * @param [c]: The character to output.
   @param [fd]: The file descriptor on which to write.
 *
 * @returns nothing.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
