/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** "turn by turn"
*/
#include <stdio.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

char main(char * str)
{
   
	char chaine[6];

    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\0';
    
    int variable;
    variable = 0;
    while(str[variable] != '\0')
    {
		//ptrintf(str[variable]);
        variable = variable + 1;
    }
    my_putchar(variable);
}
