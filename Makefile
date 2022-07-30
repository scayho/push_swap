# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 15:26:20 by abelahce          #+#    #+#              #
#    Updated: 2022/06/05 21:37:27 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


all: push_swap

CC=gcc

HEADER=minitalk.h

UTILS=utils.o

BUTILS=utils_bonus.o

CFLAGS=-Wall -Wextra -Werror -g

NAME=push_swap

SRC := ft_split.c \
	   utilsa.c	\
	   utilsb.c	\
	   utilsc.c	\
	   parsing.c \
	   sorting.c	\
	   instractions.c	\
	   instractions1.c	\
	   instractions2.c	\
	   sortlow.c	\
	   sortlarge.c	\
	   thesorting.c	\
	   tthesorting.c	\

OBJ := $(SRC:.c=.o)

HDR := push_swap_header.h

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) main.c $(OBJ) -o $(NAME)

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf push_swap

re: fclean all

