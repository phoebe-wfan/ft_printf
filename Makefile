# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 15:27:58 by wfan              #+#    #+#              #
#    Updated: 2022/12/11 17:47:21 by wfan             ###   ########.fr        #
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

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
