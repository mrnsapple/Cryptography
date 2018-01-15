##
## EPITECH PROJECT, 2017
## 
## File description:
## 
##

#ifndef MAKE
#define MAKE
SRC	=	printf.c	\
		my_puts.c

OBJ	= 	$(SRC:.c=.o)

OBC	=	$(*:.c =.o)

NAME	=	 libmyss.a

NAME2	=	my_printf


all:	$(SRC)
	gcc -g -Wall -Werror -o $(NAME2) $(SRC) 

hihi:	$(OBC)
	gcc -c $(OBC)

hehe:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm $(NAME)

re:	fclean all library



#endif