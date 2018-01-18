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

key *keya(char *av)
{
        key     *a;

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

        text    *a;
        float   y;
        int     size;
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
        my_putstr("\nEncripred message:\n");
	//print_key(a->array, a->lenght, a->lines,size);
	return (a);
}

int **feed_result(int lines, int rows)
{
	int	i;
	int	g;
	int	**result;
	
	result = malloca(lines, rows);
	for (i = 0; i < lines; i++)
	{
		for(g = 0; g < rows; g++)
			result[i][g] = 0;
	}
	
	return (result);
}
void matrix(text *a, key *b)
{
	int     x = 0;
        int     y = 0;
	int	x2 = 0;
        //int     i;
        int     **result;

	result = feed_result(a->lines, b->size);
	for (y = 0; y < a->lines; y++)
        {
		x2 = 0;
		while (x2 < b->size)
		{
			x = 0;
			while (x < b->size)
			{
				//printf("before:%d\n",result[y][x2]);#
				//			printf("array:%d\n", a->array[y][x]);
				//printf("key:%d\n", b->key[x][y]);
				result[y][x2] = result[y][x2] + a->array[y][x] * b->key[x][x2];
				
				x++;
			}
			//printf("\nafter:%d\n",result[y][x2]);
			x2++;
		}
	}
	print_array(result, a->lenght,a->lines,b->size);
}




void multiply(char **av)
{
 	text    *a;
        key     *b;
        //int   i;                                                        

        b = keya(av[2]);
	a = sentence(av[1],av[2]);
	/*if (b->size == 2)
	{
		matrix(a,b);
		matrix2(a,b);
	}
	if(b->size == 3)
	{
		matrix3(a,b);
		matrix(a,b);}*/
	matrix(a,b);
}
