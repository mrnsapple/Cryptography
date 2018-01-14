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
	int	copy_size = lines;
	int	area = lines*columns;
        //printf("keyleng:%d\n", len);                                        
	my_putstr("Key matrix :\n");
        for (sum = 0; sum < area; sum++)
        {
		x++;
                my_put_nbr(key[y][x]);
		
                if (sum == lines-1)
		{
                        my_putchar ('\n');
			x = -1;
			y++;
                        lines = lines + copy_size;
                }
                else
                        my_putchar ('\t');
	}
}

int **get_key(char *av, int size, int key_lenght)
{
        //int     i;
	int	**key;

	my_putstr("size:");
	my_put_nbr(size);
	my_putstr(",key_lenght:");
	my_put_nbr(key_lenght);
	my_putchar('\n');
		
	//printf("size:%d,lenght:%d\n", size, key_lenght);
	key = malloca(size,size);
	key = feed_array(key, av, size, size, key_lenght); 
	print_key(key, key_lenght, size,size);

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
