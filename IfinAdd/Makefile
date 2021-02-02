SRC=		main.c		\
		outils.c	\
		infin_add.c

OBJ=		$(SRC:.c=.o)

NAME=		infin_add

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:		rm $(OBJ)

fclean:		clean
		rm $(NAME)

re:		fclean all

.phony:		all fclean clean re
