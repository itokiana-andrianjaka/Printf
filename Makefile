# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/04 01:24:45 by tiana-an          #+#    #+#              #
#    Updated: 2026/02/16 14:59:44 by tiana-an         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_printf.c ft_percent.c ft_single_c.c ft_string.c\
	ft_putchar_fd_c.c ft_putnbr_fd_c.c ft_putstr_fd_c.c ft_hexadecimal.c\
	ft_integer.c ft_pointer.c ft_unsigned_int.c ft_print_hex.c\
	ft_putunsigned_int.c ft_list.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
