/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** "swap a in b"
*/

#include<stdio.h>

void swap(int * a, int * b)
{
    int z = *a;
    *a = *b;
    *b = z;
}
