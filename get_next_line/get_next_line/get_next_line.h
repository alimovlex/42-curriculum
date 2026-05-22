/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:06:20 by alalimov          #+#    #+#             */
/*   Updated: 2025/11/22 03:12:59 by alalimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_gnl_list
{
	char				*content;
	struct s_gnl_list	*next;
}						t_gnl_list;
#ifdef __cplusplus
extern "C" {
#endif

char					*get_next_line(int fd);
void					ft_attach(t_gnl_list **lst, char *buf);
char					*ft_newline(t_gnl_list **lst, char *line, int l_line);
void					ft_clear(t_gnl_list **lst);
void					ft_gnl_lstnew(t_gnl_list **lst, int fd);
t_gnl_list				*ft_lastnode(t_gnl_list **lst);
int						found_newline(t_gnl_list *lst);
int						ft_contsize(t_gnl_list *temp);
int						ft_cpylst(t_gnl_list *temp, char *line, int displacer);
void					ft_del(t_gnl_list **lst);

#ifdef __cplusplus
}
#endif


#endif