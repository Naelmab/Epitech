##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME	=	first_line

SOURCE	=	first_line.c		\

OBJ	=	$(SOURCE:.c=.o)

all	:	$(NAME) msg

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) -g3

clean	:
		rm $(OBJ)

fclean	:	clean
		rm $(NAME)

re	:	fclean all

msg:
		@echo "==> SUCCESSFULLY COMPILED"
