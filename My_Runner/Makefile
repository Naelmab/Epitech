##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	my_Runner

SRCS	=	main.c   	\
			display.c	\
			init.c		\
			tools.c		\
			animation.c

OBJ	=	$(SRCS:.c=.o)

FFLAGS	=	-l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -lm

CFLAGS	=	-Wall -Wextra -g3 -Iinc

all :		$(NAME) msg

$(NAME):	$(OBJ) $(SRCS)
		gcc -o $(NAME) $(OBJ) $(FFLAGS)
		rm *.o

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

msg:
		@echo "==> SUCCESSFULLY COMPILED"
