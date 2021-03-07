/*
** EPITECH PROJECT, 2020
** fonct P
** File description:
** fonct P
*/

#include "pushswap.h"

void pa (List l_b, List l_a)
{

    l_b = insertback(l_a, search_index(l_a, 1));
}

void pb (List l_b, List l_a)
{
    l_a = insertback(l_b, search_index(l_b, 1));
}