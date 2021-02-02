##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

SOURCE	=	*.c		\

OBJ	=	$(SOURCE:.c=.o)

all	:	$(NAME)
		rm -f $(OBJ)

$(NAME):
		gcc -c $(SOURCE)
		ar rc $(NAME)	$(OBJ)
		cp $(NAME) ../
		mkdir ../../include
		cp ./my.h ../../include/

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re	:	fclean all clean

.PHONY	:	all clean fclean re
