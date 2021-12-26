##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

SOURCE	=	$(wildcard *.c)

OBJ	=	$(SOURCE:.c=.o)

CFLAGS  =   -I

all	:	$(NAME) msg
		rm -f *.o

$(NAME):
		gcc -c $(SOURCE)
		ar rc $(NAME)	$(OBJ)
		cp $(NAME) ../../
		cp ./my.h ../../include/

clean	:
		rm -f *.o

fclean	:	clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re	:	fclean all clean

.PHONY: all clean fclean re

msg:
		@echo "==> SUCCESSFULLY COMPILED"
