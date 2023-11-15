# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 18:33:35 by hde-souz          #+#    #+#              #
#    Updated: 2023/11/04 18:57:56 by hde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -rf
SRCS    = ft_printf.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "Compiled ✨"

clean:
	$(RM) $(OBJS)
	@echo "Removed objects ✨"

fclean: clean
	$(RM) $(NAME)
	@echo "Removed executable ✨"

re: fclean all

.PHONY: all clean fclean re
.SILENT:
