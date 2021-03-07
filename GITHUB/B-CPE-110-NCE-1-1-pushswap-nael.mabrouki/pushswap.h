/*
** EPITECH PROJECT, 2020
** pushswap's headers
** File description:
** pushswap's headers
*/

#ifndef NAME
# define NAME

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct list {
    int value;
    struct list *next;
}list, *List;

void sa(int *a, int *b);
void ra(int *a, int *b);
List new_list(void);
int checklistisempty(List l_a);
int list_size(List l_a);
int main (int ac, char **av);
int search_index(List l_a, int n);
List insertback (List l_a, int n);
void pa (List l_b, List l_a);
void pb (List l_b, List l_a);
int my_bubblesort (List l_a);

#endif
