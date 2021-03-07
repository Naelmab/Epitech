##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	my_sokoban

SOURCE	=	src/condition.c			\
			src/display.c			\
			src/file.c				\
			src/lignes_colones.c	\
			src/main_sokoban.c		\
			src/move.c				\
			src/pos.c				\
			src/sokoban.c			\
			src/tools.c

OBJ	=	$(SOURCE:.c=.o)

all	:	$(NAME) msg

$(NAME)	:	$(OBJ)
		gcc -lncurses -o $(NAME) $(OBJ) -g3

clean	:
		rm $(OBJ)

fclean	:	clean
		rm $(NAME)

re	:	fclean all clean

msg:
		@echo "==> SUCCESSFULLY"
