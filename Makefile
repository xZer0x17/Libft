# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alflores <alflores@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 10:08:04 by zer0              #+#    #+#              #
#    Updated: 2022/10/22 19:00:20 by alflores         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c ft_putendl_fd.c ft_itoa.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_strmapi.c ft_putnbr_fd.c ft_split.c ft_strdup.c ft_strtrim.c ft_striteri.c
OBJS	= ${SRCS:.c=.o}

SRCSB	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstclear_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJSB	= ${SRCSB:.c=.o}
NAME	= libft.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wextra -Werror -Wall
AR		= ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	@ar rsc $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS) $(OBJSB)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
