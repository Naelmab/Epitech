/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** "swap a in b"
*/

#include<stdio.h>
void my_putchar (int c)
{
	write(1, &c, 1);
}

void swap(int * a, int * b)
{
    int z = *a;
    *a = *b;
    *b = z;
}







