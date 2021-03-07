## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	main

SOURCE	=	src/main_sokoban.c		\

OBJ	=	$(SOURCE:.c=.o)

all	:	$(NAME) msg

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) -g3

clean	:
		rm $(OBJ)

fclean	:	clean
		rm $(NAME)

re	:	fclean all clean

msg:
		@echo "==> SUCCESSFULLY"
