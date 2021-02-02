##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

SOURCE	=	lib/fonction.c		\
		lib/fctprint.c		\
		lib/my_printf.c		\
		lib/outils.c

all	:	$(NAME)
		rm -f *.o

$(NAME):
		gcc -c $(SOURCE)
		ar rc $(NAME)	*.o
		cp $(NAME) ../
		mkdir include
		cp lib/my.h include 

clean	:
		rm -f *.o

fclean	:	clean
		rm -f $(NAME)
		rm -f my/$(NAME)
		rm -r include

re	:	fclean all clean

.PHONY	:	all clean fclean re
