# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 14:11:34 by llorgere          #+#    #+#              #
#    Updated: 2019/11/14 14:40:17 by llorgere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strjoin.c \
	  ft_substr.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_calloc.c \

BONUS = ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \
	  ft_lstadd_back.c \
	  ft_lstadd_front.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstlast.c \
	  ft_lstsize.c \

OBJ = $(SRC:.c=.o)
OBJBONUS = $(BONUS:.c=.o)
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
.PHONY = all clean fclean re

all : $(NAME)

$(NAME) : 
		$(CC) $(CFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

bonus : all
		$(CC) $(CFLAGS) $(BONUS)
		ar rc $(NAME) $(OBJBONUS)
		ranlib $(NAME)

clean :
		/bin/rm -rf $(OBJ) $(OBJBONUS)

fclean : clean
		/bin/rm -rf $(NAME)

re : fclean all
