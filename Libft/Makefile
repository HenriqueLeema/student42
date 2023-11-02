# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 14:55:10 by hde-souz          #+#    #+#              #
#    Updated: 2023/10/04 14:55:10 by hde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -rf
FILES	= \
			ft_isalnum.c ft_isalpha.c ft_isdigit.c \
			ft_isascii.c ft_bzero.c ft_isprint.c \
			ft_memcpy.c ft_memset.c ft_memmove.c \
			ft_strlen.c ft_strlcat.c ft_strlcpy.c \
			ft_tolower.c ft_toupper.c ft_atoi.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c \
			ft_substr.c ft_strdup.c ft_calloc.c \
			ft_putchar_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c \
			ft_strjoin.c ft_itoa.c ft_split.c \
			ft_strtrim.c ft_strmapi.c ft_striteri.c
BONUS   = \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(FILES:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "Compiled ✨" 
	
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
	@echo "Bonus Compiled ✨" 

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "Cleared ✨"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean
.SILENT: