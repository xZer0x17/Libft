# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alflores <alflores@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 10:08:04 by zer0              #+#    #+#              #
#    Updated: 2022/10/05 18:33:28 by alflores         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wextra -Werror -Wall
AR		= ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	@ar rsc $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS) $(OBJS_B)

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 