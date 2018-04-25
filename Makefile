##
## EPITECH PROJECT, 2017
## 
## File description:
## by mrnsapple
##

#ifndef _MAKE_
#define _MAKE_

SRC	=	main.c		\
		malloc.c	\
		multiply.c	\
		key.c		

OBJ	= 	$(SRC:.c=.o)

NAME	=	 103cipher

RM	=	rm -f

all:	$(NAME)

$(NAME):	
	gcc -g -Wall -Werror -o $(NAME) $(SRC)
clean:
	$(RM) $(OBJ) *# *~

fclean: clean
	$(RM) $(NAME)

re:	fclean all 

#endif
