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
	int	i;
	
 	i = 0;
        while (av[i] != '\0')
	        i = i + 1;
        return (i);
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
                printf("%d",key[y][x]);
		
                if (sum == columns-1)
		{
                        printf("\n");
			x = -1;
			y++;
                        columns = columns + copy_size;
                }
                else
                        printf("\t");
	}
}

void print_array(int **key, int len, int lines, int columns)
{
        int     x = -1;
        int     y = 0;
        int     sum;
	int	copy_size = columns;
	//printf("lines:%d,columns:%d\n", lines, columns);
	int     area = lines*columns;
        
	for (sum = 0; sum < area; sum++)
        {
                x++;

		printf("%d",key[y][x]);
		if(sum < area -1)
			printf(" ");
		if (sum == columns-1)
		{
                        x = -1;
			y++;
			columns = columns + copy_size;
		}
		//my_putchar (' ');
	}
	printf("\n");
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
