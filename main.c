/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void error(int ac)
{
	if (ac != 3)
		exit(0);
}

int num_lines(int len)
{
	int i = 1;

	while (len > i*i)
	{
		i++;
	}

	return (len);
}

key *keya(char *av)
{
	key	*a;
        
	a = malloc(sizeof(*a));
	a->lenght = key_lengh(av);
        a->size = matrix_size(av);
	a->key = get_key(av, a->size, a->size, a->lenght);
	my_putstr("Key matrix :\n");
        print_key(a->key, a->lenght, a->size,a->size);


	return (a);
}

text *sentence(char *av, char *av2)
{
	text	*a;
	float	y;
	int	size;
	a = malloc(sizeof(*a));
	a->lines = 0;
	a->lenght = key_lengh(av);
	size = matrix_size(av2);
	y = (float)a->lenght / size;
	//printf("lengh%d\n",lenght);
	while ((float)a->lines < y)
		a->lines++;
	//my_put_nbr(a->lines);
	a->array = get_key(av,size,a->lines,a->lenght);

	return (a);
}

void matrix2(text *a, key *b)
{
	int	x;
	int	y = 0;
	int	i;
	int	**result;
	
	result = malloca(a->lines, b->size);
	
	for (i = 0; i < a->lines; i++)
	{
		x = 0;
		//multiply 1 linea
		result[y][x] = a->array[y][x] * b->key[0][0]+	\
			a->array[y][x+1] * b->key[1][0];
                //multiply 2 linea
		result[y][x+1] = a->array[y][x] * b->key[0][1]+	\
			a->array[y][x+1] * b->key[1][1];
		
		y++;
	}
	//my_put_nbr(a->array[0][1]);
	my_putchar('\n');
	print_key(result, a->lenght,a->lines,b->size);
}
	
void multiply(char **av)
{
	text	*a;
	key	*b;
	//int	i;
       
	b = keya(av[2]);
	a = sentence(av[1],av[2]);
	if (b->size == 2)
	{
		matrix2(a,b);
	}
}

int main (int ac, char **av)
{
	error(ac);
	multiply(av);
}
	
