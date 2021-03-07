/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "pushswap.h"

List new_list(void)
{
    return NULL;
}

int checklistisempty(List l_a)
{
    if (l_a == NULL)
        return 1;

    return 0;
}

int list_size(List l_a)
{
    int size = 0;

    if (checklistisempty(l_a))
        return size;
    while (l_a != NULL){
        ++size;
        l_a = l_a->next;
    }
    return size;
}

int display_list(List l_a)
{
    if (checklistisempty(l_a))
        return 84;
    while (l_a != NULL) {
        printf("[%d]", l_a->value);
        l_a = l_a->next;
    }
    printf("\n");
    return 0;
}

List insertback (List l_a, int n)
{
    list *element;
    element = malloc(sizeof(*element));
    element->value = n;
    element->next = NULL;
    list *temp = l_a;

    if (element == NULL)
        exit(EXIT_FAILURE);
    if (checklistisempty(l_a))
        return element;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = element;

    return l_a;
}

List insertfront (List l_a, int n)
{
    list *element;
    element = malloc(sizeof(*element));
    element->value = n;

    if (element == NULL)
        exit(EXIT_FAILURE);
    if (checklistisempty(l_a))
        element->next = NULL;
    else
        element->next = l_a;

    return element;
}

List deleteback (List l_a)
{
    if (checklistisempty(l_a))
        return new_list();
    if (l_a->next == NULL) {
        free(l_a);
        return new_list();
    }
    list *after = l_a;
    list *before = l_a;

    while (after->next != NULL){
        before = after;
        after = after->next;
    }
    return l_a;
}

List deletefront (List l_a)
{
    list *element;
    element = l_a->next;

    if (element == NULL)
        exit(EXIT_FAILURE);
    free(l_a);
    return element;
}

int my_getnbr(char const *str)
{
    int n = 0;
    int nb = 0;
    int jump = 0;
    int s = 1;

    while (str[n] != '\0' && (str[n++] >= '0' || str[n++] <= '9')){
        if (str[n] == '-')
            s *= -1;
        n++;
    }
    if (str[n] == '\0')
        return (0);
    while (str[n] != '\0' && (str[n] <= '9' && str[n] >= '0')) {
        if ((nb == 214748364 && str[n] - 48 > 7) || nb > 214748364 || jump > 10)
            return (0);
        nb = nb * 10 + (str[n] - '0');
        n++;
        jump++;
    }
    return (nb * s);
}

int search_index(List l_a, int n)
{
    int m = 0;

    while (m < n) {
        {
            m++;
            l_a = l_a->next;

        }
    }
    return (l_a->value);
}

int check_order (List l_a)
{
    int n = 0;

    while (n != list_size(l_a) - 1) {
        if (search_index(l_a, n) < search_index(l_a, n + 1))
            n++;
        else if (search_index(l_a, n) > search_index(l_a, n + 1)) {
            //my_bubblesort(l_a);
            return 84;
        }
    }
    return 0;
}
/*
int my_bubblesort (List l_a)
{
    List l_b = new_list();
    if (check_order(l_a) == 0)
        return 0;
    for (int n = 0; n != list_size(l_b); n++) {
        if (search_index(l_a, n) > search_index(l_a, n + 1))
            sa(search_index(l_a, n), search_index(l_a, n + 1));
        if (search_index(l_a, n + 1) < search_index(l_a, list_size(l_a)))
            ra(search_index(l_a, n + 1), search_index(l_a, list_size(l_a)));
        if (ra == 0 && search_index(l_a, n) > search_index(l_a, n + 1))
            sa(search_index(l_a, n), search_index(l_a, n + 1));
        else if (ra == 84)
            pb(l_b, l_a);
    }
    for (int n = 0; n != list_size(l_b); n++)
        pa(l_b, l_a);
    my_bubblesort(l_a);
}*/

List clear_list(List l_a)
{
    while (l_a != NULL)
    {
        l_a = deletefront(l_a);
    }
    return (l_a);
}

int main (int ac, char **av)
{
    int n = 1;

    if (ac <= 1)
        return 84;
    List l_a = new_list();
    while (n != ac) {
        l_a = insertback(l_a, atoi(av[n]));
        n++;
    }
    check_order(l_a);
    l_a = clear_list(l_a);
    return 0;
}