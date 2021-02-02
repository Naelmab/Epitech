##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME	=	500_bytes

SOURCE	=	500_bytes.c		\

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
