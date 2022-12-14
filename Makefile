# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 15:27:58 by wfan              #+#    #+#              #
#    Updated: 2022/12/11 18:26:39 by wfan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printchar \
	ft_printstr \
	ft_printnbr ft_printabs \
      ft_printnbr_base16 ft_printmem ft_printf

OBJ = $(SRC:=.o)
NAME = libftprintf.a
LIBR = ar -rc
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

%.o:%.c
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME): $(OBJ)
	$(LIBR) $(NAME) $(OBJ)

test: $(OBJ)
	cc $(OBJ) $(CFLAGS) -o test

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) test

re: fclean all
