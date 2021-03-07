##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for 103cipher.
##

SRC	=	src/tools.c	\
		src/minishell.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all:	$(NAME)

$(NAME):
	gcc $(SRC) -Wall -Wextra  -I include -o $(NAME) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
