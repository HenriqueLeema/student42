# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 17:09:03 by hde-souz          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2024/01/14 18:15:29 by hde-souz         ###   ########.fr        #
=======
#    Updated: 2023/12/11 20:54:49 by hde-souz         ###   ########.fr        #
>>>>>>> b52b8901bc6799bb1cba4d8a25f4607d5e828eee
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NAME = push_swap
LIBDIR = ./Libft
<<<<<<< HEAD
LIBAR = libft.a
FILES	= \
			push.c \
			rev_rotate.c \
			rotate.c \
			sort_stacks.c \
			sort_three.c \
			swap.c \
			handle_errors.c \
			init_a_to_b.c \
			init_b_to_a.c \
			push_swap.c \
			split.c \
			stack_init.c \
			stack_utils.c
BONUS   = 
OBJS = ${FILES:.c=.o}
BONUS_OBJS = $(BONUS:.c=.o)
=======
LIBAR = ./Libft/libft.a
CFILES = test.c
OBJS = ${CFILES:.c=.o}
>>>>>>> b52b8901bc6799bb1cba4d8a25f4607d5e828eee

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