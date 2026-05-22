/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:05:46 by alalimov          #+#    #+#             */
/*   Updated: 2025/11/17 18:03:17 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_put_unsigned(unsigned int number);
int	ft_put_hex(unsigned int number, char format);
int	ft_put_ptr(unsigned long number, char format);