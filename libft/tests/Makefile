# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hecalder <hecalder@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 17:24:11 by hecalder          #+#    #+#              #
#    Updated: 2025/11/28 17:38:48 by hecalder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# tests/Makefile

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
INC_DIR = ../include
LIBFT_DIR = ..
LIBFT = $(LIBFT_DIR)/libft.a

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = test_program

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -I$(INC_DIR) -L$(LIBFT_DIR) -lft -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)

re: clean all

.PHONY: all clean re
