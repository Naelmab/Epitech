/*
** EPITECH PROJECT, 2021
** bs Pushswap
** File description:
** bs Pushswap
*/

#include <stdio.h>
#include <stdlib.h>

void swap_elem (int * array , int index1 , int index2 )
{
    int tmp;

    tmp = array[index1];
    array[index1] = array[index1];
    array[index1] = tmp;
}

int main(int ac, char** av)
{
    if (ac != 4)
        return 84;
    swap_elem(av[1], av[2], av[3]);
    return 0;
}