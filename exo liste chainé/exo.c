/*
** EPITECH PROJECT, 2021
** exo
** File description:
** exo
*/

List new_list(void)
{
    return NULL;
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

List clear_list(List l_a)
{
    while (l_a != NULL)
    {
        l_a = deletefront(l_a);
    }
    return (l_a);
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
    my_bubblesort(l_a);
    //sa(atoi(av[1]), atoi(av[12]));
    //printf("%d\n", my_getnbr(av[1]));
    display_list(l_a);
    check_order(l_a);
    l_a = clear_list(l_a);
    return 0;
}
