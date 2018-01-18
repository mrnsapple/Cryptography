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
        my_putstr("\nEncripred message:");
        return (a);
}

void matrix2(text *a, key *b)
{
 	int     x;
        int     y = 0;
        int     i;
        int     **result;
	int	sum_x = 0;
        result = malloca(a->lines, b->size);

        for (i = 0; i < a->lines; i++)
        {
                x = 0;
		while ( sum_x < b->size)
		{
		result[y][x] = a->array[y][x+sum] * b->key[0][0]+   \
                        a->array[y][x+1] * b->key[1][0];
                //multiply 2 linea                                                                      
		result[y][x+1] = a->array[y][x] * b->key[0][1]+ \
                        a->array[y][x+1] * b->key[1][1];
		}
                y++;
        }
        //my_put_nbr(a->array[0][1]);                                                                   
	my_putchar('\n');
	print_key(result, a->lenght,a->lines,b->size);
}

void matrix3(text *a, key *b)
{
        int     x;
        int     y = 0;
        int     i;
        int     **result;

        result = malloca(a->lines, b->size);

        for (i = 0; i < a->lines; i++)
        {
                x = 0;
                result[y][x] = a->array[y][x] * b->key[0][0]+   \
                        a->array[y][x+1] * b->key[1][0]+\
			a->array[y][x+2] * b->key[1][0];
		result[y][x+1] = a->array[y][x] * b->key[0][1]+ \
			a->array[y][x+1] * b->key[1][1]+\
			a->array[y][x+2] * b->key[2][1];
		result[y][x+2] = a->array[y][x] * b->key[0][2]+ \
			a->array[y][x+1] * b->key[1][2]+\
			a->array[y][x+1] * b->key[2][2];
		
                }
                y++;
        }
        //my_put_nbr(a->array[0][1]);                                               \
                                                                                     
        my_putchar('\n');
        print_key(result, a->lenght,a->lines,b->size);
}


void multiply(char **av)
{
 	text    *a;
        key     *b;
        //int   i;                                                        

        b = keya(av[2]);
	a = sentence(av[1],av[2]);
	if (b->size == 2)
                matrix2(a,b);
	if(b->size == 3)
                matrix3(a,b);
}
