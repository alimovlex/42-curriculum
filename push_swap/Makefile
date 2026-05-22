# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalimov <alalimov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/08 02:53:58 by alalimov          #+#    #+#              #
#    Updated: 2025/12/08 02:53:59 by alalimov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = cc
CFLAGS = -Wall -Wextra -Werror -g
NAME   = push_swap
LIBFT_DIR = ./libft
LIBFT  = $(LIBFT_DIR)/libft.a

SRCS   = main.c\
	lists.c\
	lists_utils.c\
	more_operations.c\
	operations.c\
	parse_args.c\
	stack.c\
	start_sorting.c\
	utils.c\
	indexing.c\
	ft_printf.c\
	ft_put_unsigned.c\
	ft_put_hex.c\
	ft_put_ptr.c
OBJS   = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) bonus -C $(LIBFT_DIR)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
