# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 17:09:03 by hde-souz          #+#    #+#              #
#    Updated: 2023/12/11 20:54:49 by hde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NAME = push_swap.a
LIBDIR = ./Libft
LIBAR = ./Libft/libft.a
CFILES = test.c
OBJS = ${CFILES:.c=.o}

all: $(NAME)

$(NAME): $(LIBAR) $(OBJS)
	cp $< $(NAME)
	$(AR) $@ $^

OBJS: $(CFILES)
	$(CC) $(CFLAGS) -c $^

$(LIBAR): $(LIBDIR)
	@make all -C $^

bonus: $(NAME)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBDIR)

fclean: clean
	$(RM) push_swap.a
	$(RM) $(LIBAR)

re: fclean $(NAME)

.PHONY: clean fclean re all
.SILENT: