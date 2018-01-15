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
	my_put_nbr(a->lines);
	a->array = get_key(av,size,a->lines,a->lenght);

	return (a);
}

void multiply(char **av)
{
	/*text	*a;
	key	*b;
	int	i = 0;
	int	x = 0;
	int	y = 0;
	*/
	keya(av[2]);
	sentence(av[1],av[2]);
	/*while (
	  a->key[0][0] == a->key[y][x] * */
}

int main (int ac, char **av)
{
	error(ac);
	multiply(av);
	//get_key(av[1]);
		
}
	
