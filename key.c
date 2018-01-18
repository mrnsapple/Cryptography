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

int key_lengh(char *av)
{
        int     i;
 	i = 0;

        while(av[i] != '\0')
	        i = i + 1;

        return(i);
}
void print_key(int **key, int len, int lines, int columns)
{
        int     x = -1;
	int	y = 0;
	int	sum;
	int	copy_size = columns;
	int	area = lines*columns;
        //printf("keyleng:%d\n", len);                                        
	for (sum = 0; sum < area; sum++)
        {
		x++;
                my_put_nbr(key[y][x]);
		
                if (sum == columns-1)
		{
                        my_putchar ('\n');
			x = -1;
			y++;
                        columns = columns + copy_size;
                }
                else
                        my_putchar ('\t');
	}
}

void print_array(int **key, int len, int lines, int columns)
{
        int     x = -1;
        int     y = 0;
        int     sum;
	int	copy_size = columns;
	int     area = lines*columns;
	int	a = 14;
	int	copy_a = 14;
        for (sum = 0; sum < area && sum < len; sum++)
        {
                x++;
                my_put_nbr(key[y][x]);
	        	
		if (sum == columns-1)
		{
                        x = -1;
			y++;
			columns = columns + copy_size;
		}
		if(sum == a-1)
		{
			my_putchar('\n');
			a = a+copy_a;
		}
                else
                        my_putchar (' ');
	}
}

int **get_key(char *av, int rows,int lines, int key_lenght)
{
        //int     i;
	int	**key;

	/*my_putstr("lines:");
	my_put_nbr(lines);
	my_putstr(",key_lenght:");
	my_put_nbr(key_lenght);
	my_putchar('\n');
		
	printf("size:%d,lenght:%d\n", size, key_lenght);*/
	key = malloca(lines,rows);
	key = feed_array(key, av, lines, rows, key_lenght); 
	
        return (key);
}
int matrix_size(char *av)
{
 	int     i = 1;
        int     m;

        m = key_lengh(av);
	while (i*i < m)
                i++;
	return(i);


}
