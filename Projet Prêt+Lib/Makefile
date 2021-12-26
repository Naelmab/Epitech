##
## EPITECH PROJECT, 2020
## MakeFile
## File description:
## Makefile
##

SRC	=	$(wildcard src/*.c)

NAME	=	Test

NAME_LIB	=	libmy.a

all:	$(NAME)


$(NAME):
	@make -sC lib/my/
	@gcc $(SRC) -L. $(NAME_LIB) -o $(NAME)
	@rm -f *~
	@rm -f #*#

clean :
	@rm -f *~
	@rm -f #*#
	@rm -f src/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_LIB)
	@rm -f lib/my/$(NAME_LIB)
	@rm -f src/*.o

re:	fclean all
