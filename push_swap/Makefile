# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 17:09:03 by hde-souz          #+#    #+#              #
#    Updated: 2024/01/14 18:15:29 by hde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NAME = push_swap
LIBDIR = ./Libft
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

all: $(NAME)

$(NAME): $(LIBAR) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) -L$(LIBDIR) -lft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBAR):
	@make -C $(LIBDIR)

bonus: $(NAME)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBDIR)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBDIR)

re: fclean $(NAME)

.PHONY: clean fclean re all
.SILENT: