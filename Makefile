# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 16:28:09 by ktwomey           #+#    #+#              #
#    Updated: 2018/08/20 13:32:03 by ktwomey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
SOURCES = srcs/*.c
INCLUDES = includes/get_next_line/get_next_line.c includes/libft/*.c

$(NAME): 
	gcc -o kyle.filler -Wall -Werror -Wextra $(SOURCES) $(INCLUDES)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
