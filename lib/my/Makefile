##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

AR	=	ar rc

all:	$(NAME)

$(NAME):	$(OBJ)
		$(AR) ../$(NAME) $(OBJ)
		rm *.o
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
