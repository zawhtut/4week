# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhtut <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 17:45:18 by zhtut             #+#    #+#              #
#    Updated: 2018/11/08 17:48:39 by zhtut            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FILE =  ./display_file.c
OBJECT = ./display_file.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc -c $(FILE)
		gcc $(FLAGS) -o $(NAME) $(OBJECT)

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)
