# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgury <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/27 12:59:29 by sgury             #+#    #+#              #
#    Updated: 2019/02/27 20:30:19 by sgury            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = ft_atoi.c \
	   ft_strlen.c \
	   ft_display.c \
	   main.c \

OBJ = ft_atoi.o \
	  ft_strlen.o \
	  ft_display.o \
	  main.o \

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -rf $(OBJ)
