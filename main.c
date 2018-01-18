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
	if (ac != 4)
		exit(84);
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

int zero(char *av)
{
	int	i = 0;

	while(av[i] != '\0')
		i++;
	
        if(i == 1 && av[0] == '0')
		return (0);
        exit(84);
}
int main (int ac, char **av)
{
	error(ac);
	zero(av[3]);
	multiply(av);
	return (0);
}
	
