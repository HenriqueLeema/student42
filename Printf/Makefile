# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 18:33:35 by hde-souz          #+#    #+#              #
#    Updated: 2023/11/02 20:12:16 by hde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -rf
SRCS    = ft_printf.c ft_putchar.c ft_putstr.c \
          ft_putnbr.c ft_putunbr.c ft_putptr.c \
          ft_puthex.c ft_strchr.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "Compiled ✨"

clean:
	rm -f $(OBJS)
	@echo "Cleared ✨"

fclean: clean
	rm -f $(NAME)
	@echo "Removed executable ✨"

re: fclean all

.PHONY: all clean fclean re
.SILENT:
