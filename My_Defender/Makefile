##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for my runner.
##

SRC	=	src/init.c	\
		src/game.c	\
		src/struct.c	\
		src/tools.c	\
		src/main.c


OBJ	=	$(SRC:.c=.o)

LFLAGS  =       -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

NAME	=	my_defender

all:	$(NAME) msg

$(NAME):
	gcc $(SRC) -Wall -Wextra  $(LFLAGS) -I include -o $(NAME) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

msg:
		@echo "==> SUCCESSFULLY COMPILED"
