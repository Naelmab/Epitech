##
## EPITECH PROJECT, 2020
## makefile tests
## File description:
## makefile tests
##

SOURCE	=	../lib/fonction.c       \
		    ../lib/fctprint.c       \
		    ../lib/my_printf.c      \
		    ../lib/fctprint2.c      \
		    ../lib/fonction2.c      \
		    ../lib/fonction3.c      \
		    ../lib/fctprint3.c      \

SRC_T   =   flags_tests.c

OBJ	    =	$(SOURCE:.c=.o) $(SRC_T:.c=.o)

CFLAGS  =   -I../include/ --coverage

LDFLGS  =   -lcriterion -lgcov

NAME	=	unit_tests

all	    :	$(NAME)

$(NAME) :	$(OBJ)
		    gcc -o $(NAME)	$(OBJ) $(LDFLGS)

clean	:
		    rm -f $(OBJ)

fclean	:	clean
	find -name "*.o" -delete
	find -name "*.gc*" -delete
	rm -f $(NAME)
	rm -f   unit_tests

re	    :	fclean all clean

.PHONY	:	all clean fclean re
