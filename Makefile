##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	srcs/push_swap.c	\
		srcs/actions.c		\
		srcs/actions2.c		\
		srcs/chainlist.c	\

OBJ	=	$(SRC:.c = .o)

NAME	=	push_swap

LIB_DIR	=	./lib

MY.H_DIR	=	./include

CC	=	gcc

LIB_FLAG	=	-L$(LIB_DIR) -lmy

INCL_FLAG	=	-I$(MY.H_DIR)

all:	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C lib/my
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIB_FLAG) $(INCL_FLAG)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean all re clean
