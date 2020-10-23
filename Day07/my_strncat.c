/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** my_strncat.c
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int m = 0;
    int n = 0;

    for (m = 0; dest[m] != '\0'; m++);
    for (n = 0; n < nb && src[n] != '\0'; n++)
        dest[m+n] = src [n];
    dest[m + n] = '\0';
    return dest;
}
