/*
** EPITECH PROJECT, 2020
** swaping.c
** File description:
** swaping element.
*/

#include "my.h"

void bubbleSort(int arr[], int n)
{
    int i;
    int j;

    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                my_swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    i = 0;

    while (i < size) {
    my_putstr("pa");
    i++;
    }
}
