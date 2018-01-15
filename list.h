/*
** EPITECH PROJECT, 2017
** 
** File description:
** 
*/

#ifndef LIST_H_
#define LIST_H_
typedef struct sentence_t
{
	int     **array;
	int	lines;
	int	lenght;
}text;

typedef struct key_t
{
	int	**key;
	int	size;
	int	lenght;
}
	
typedef struct check_struct
{
        char arg;
	int (*fptr)(char *);
}check_struct;

int key_lengh(char *av);
int **get_key(char *av, int rows,int lines, int key_lenght);
int matrix_size(char *av);
void print_key(int **key, int len, int lines, int columns);
int **malloca(int lines, int columns);
int **feed_array(int **key, char *str, int lines,\
                  int columns, int key_lenght);

void my_putchar(char c);
int my_putstr(char  *str);
int my_put_nbr(int nb);
unsigned long my_put_ulong(unsigned long nb);
long my_put_long(long nb);
long long my_put_llong(long long nb);
long my_put_octal(long nb);

#endif
