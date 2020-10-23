NAME	=	eval_expr

SOURCE	=	main.c		\
            eval_expr.c\
            tool.c

OBJ	=	$(SOURCE:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean	:
		rm $(OBJ)

fclean	:
		    rm $(NAME)

re	:	fclean all clean

.PHONY	:	all clean fclean re 
