/*
** EPITECH PROJECT, 2017
** my_put_everything
** File description:
** By Luis Angel Macias de la Cruz
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "list.h"
void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char *str)
{
	
	int	i;
	i = 0;
	//cerbol
	while(str[i] != '\0')
	{
		my_putchar(str[i]);
		i = i + 1;
	}
	my_putchar(str[i]);
	
	return(0);	
}

/*int	my_put_nbr(int nb)
{
	int	i;
	
        if(nb < 0)
        {
                my_putchar('-');
                nb = nb * (-1);
        }
	if(nb >= 0)
	{
		if(nb >= 10)
		{
			i = nb % 10;
			nb = (nb - i) / 10;
			my_put_nbr(nb);
			my_putchar('0' + i);
		}
		else
			my_putchar('0' + nb % 10);
	}
	return(0);
}*/
int	nb_divide(int nb)
{
	int	div;

	if (nb == 0)
		return (1);
	div = 1;
	while (nb >= div)
	{
		div = div * 10;
	}
	return (div / 10);
}
int	my_put_nbr(int nb)
{
	if(nb < 0)
	{
		my_putchar('-');
		nb = nb * -1;
	}
	int	div;
        div = nb_divide(nb);
	while (div != 0)
	{
		my_putchar(nb / div + '0');
		nb = nb % div;
		div = div / 10;		
	}
	return (0);
}

unsigned long	my_put_ulong(unsigned long nb)
{
        unsigned long     i;

	if(nb < 0)
        {
                my_putchar('-');
		nb = nb * (-1);
	}
        if(nb >= 0)
	{
         	if(nb >= 10)
		{
                 	i = nb % 10;
			nb = (nb - i) / 10;
			my_put_nbr(nb);
			my_putchar('0' + i);
		}
	        else
         	        my_putchar('0' + nb % 10);
	}
        return(0);
}

long	my_put_long(long nb)
{
        long     i;

        if(nb < 0)
        {
                my_putchar('-');
		nb = nb * (-1);
	}
        if(nb >= 0)
	{
         	if(nb >= 10)
		{
                 	i = nb % 10;
			nb = (nb - i) / 10;
			my_put_nbr(nb);
			my_putchar('0' + i);
		}
                else
                       my_putchar('0' + nb % 10);
        }
	return(0);
}

long long	my_put_llong(long long nb)
{
       long long     i;

        if(nb < 0)
	{
                my_putchar('-');
		nb = nb * (-1);
	}	
	if(nb >= 0)
        {
		if(nb >= 10)
                {
                        i = nb % 10;
                        nb = (nb - i) / 10;
                        my_put_nbr(nb);
		        my_putchar('0' + i);
                }
                else
                       my_putchar('0' + nb % 10);
        }
	return(0);

}

long my_put_octal(long nb)
{
	long	octal;
	long	i;
	
	octal = 0;
	i = 1;
	while(nb != 0)
	{
		octal = octal + (nb % 8) * i;
		nb = nb / 8;
		i = i * 10;
	}
	my_put_nbr(octal);
	return(octal);
}
	      
