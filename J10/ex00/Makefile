# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgury <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/26 13:45:19 by sgury             #+#    #+#              #
#    Updated: 2019/02/26 17:44:13 by sgury            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c \
	   ./srcs/ft_putstr.c \
	   ./srcs/ft_strcmp.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_swap.c \

INCLUDES = ./includes

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o \

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
