/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h for pushswap.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Element Element;
struct Element
{
    int nbr;
    Element *next;
};

typedef struct List List;
struct List{
    Element *first;
};


List init();
void insert(List *list, int newnbr);
void suprr(List *list);
void printing(List *list);

void    my_putchar(char c);
void    bubbleSort(int arr[], int n);
void    my_swap(int *a, int *b);
int    my_putstr(char const *str);
void printArray(int arr[], int size);
int    my_put_nbr(int nb);
