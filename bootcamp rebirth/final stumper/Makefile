##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME    =	rush3

SOURCE  =	main.c     	\
		rush3.c		\
		my_putstr.c 	\
		my_put_nbr.c	\
		my_putchar.c

OBJ     =	$(SOURCE:.c=.o)

all     :	compil clean

compil  :	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean   :
		rm $(OBJ)

fclean  :	clean
		rm $(NAME)

re      :	fclean all clean

.PHONY  :	all clean fclean re
