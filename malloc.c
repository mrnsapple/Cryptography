/*
** EPITECH PROJECT, 2018
** 
** File description:
** by mrnsapple 
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int **malloca(int lines, int columns)
{
        int     **pwd;
        int     j;

        pwd = malloc(sizeof(int *) * lines);
	for(j = 0; j < lines; j++)
	        pwd[j] = malloc(sizeof(int)*columns);

	return (pwd);
}

int **feed_array(int **key, char *str, int lines,\
		  int columns, int key_lenght)
{
        int	y = 0;
        int	x = -1;
	int	sum;
	
	for (sum = 0; sum < key_lenght; sum++)
	{
		x++;
	        key[y][x]  = str[sum];
		if(x == columns - 1)
                {
                        y++;
                        x = -1;
                }	
        }
	for(sum = sum;sum < lines*columns; sum++)
        {
         	x++;
		key[y][x] = 0;
		if(x == columns - 1)
                {
                        y++;
		        x = -1;
                }
        }

        return (key);
}
