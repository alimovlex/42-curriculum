/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:33:01 by alalimov          #+#    #+#             */
/*   Updated: 2025/12/06 17:33:13 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*last;

	if (!lst || (!lst && !n))
		return ;
	if (!*lst)
	{
		*lst = n;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = n;
}
