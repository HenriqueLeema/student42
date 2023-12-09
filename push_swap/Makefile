# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 17:09:03 by hde-souz          #+#    #+#              #
#    Updated: 2023/12/09 18:13:42 by hde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NAME = push_swap.a
LIBDIR = ./Libft
LIBAR = libft.a
FILES	= \
			test.c
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