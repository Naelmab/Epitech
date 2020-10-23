/*
** EPITECH PROJECT, 2020
** my_evil_str.c
** File description:
** "letterrev"
*/

#include <stdio.h>
#include <string.h>

int my_putchar(char c)
{
	write(1, &c, 1);
}

char * my_evil_str ( char * str );
{
	char *str[30] = "Hello World";
	printf(str[variable]);
	
    int variable = 0;
    str[variable] = '\0' - 1;
    while(str[variable] >= 0 )
    {
        variable = variable - 1;
        my_putchar(str[variable]);
    }
    my_putchar('\0');
	
}
