##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## eval_expr
##

NAME	=	eval_expr

SOURCE	=	main.c          \
    		eval_expr.c     \
	    	tool.c          \
		    toolop.c

OBJ 	=	$(SOURCE:.c=.o)

all     :   compil clean

compil	:	$(OBJ)
		    gcc -o $(NAME) $(OBJ)

clean	:
		    rm -f $(OBJ)
		    rm -f *~

fclean	:	clean
		    rm $(NAME)

re	    :	fclean all
