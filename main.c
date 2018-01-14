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
	get_key(av, size, key_lenght);
}
int main (int ac, char **av)
{
	error(ac);
	
	key(av[2]);
	
	
	//get_key(av[1]);
		
}
	
