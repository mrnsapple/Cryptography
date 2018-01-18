##
## EPITECH PROJECT, 2017
## 
## File description:
## 
##

#ifndef MAKE
#define MAKE
SRC	=	main.c		\
		my_puts.c	\
		multiply.c	\
		key.c		\
		malloc.c

OBJ	= 	$(SRC:.c=.o)

NAME	=	 103cipher

RM	=	rm -rf


all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g -Wall -Werror -o $(NAME) $(SRC)
clean:
	$(RM) $(NAME)

fclean: clean
	rm -rf $(OBJ) *~ *#

re:	fclean all 



#endif
