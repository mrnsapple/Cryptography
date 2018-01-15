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

void key(char *av)
{
        int	size;
	int	key_lenght;
	//int	**key;
	
	key_lenght = key_lengh(av);
	size = matrix_size(av);
	get_key(av, size,size, key_lenght);
}

text *sentence(char *av)
{
	text	*a;
	int	y = 0;
	float	lines = 1;
	int	lenght;
	a = malloc(sizeof)*a);
	lenght = key_lengh(av[1]);
	lines = (float)lenght / 3;
	printf("lengh%d\n",lenght);
	while ((float)y < lines)
		y++;
	my_put_nbr(y);
	return (get_key(av,3,y,lenght));	
}

void multiply(char **av)
{

	key(av[2]);
	sentence(av[1]);
}

int main (int ac, char **av)
{
	error(ac);
	multiply(av[1],av[2]);
	//get_key(av[1]);
		
}
	
