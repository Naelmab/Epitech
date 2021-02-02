/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** strcate
*/

char *my_strcat(char *dest, char const *src)
{
    int m = 0;
    int n = 0;

    for (m = 0; dest[m] != '\0'; m++);
    for (n = 0; src[n] != '\0'; n++)
        dest[m+n] = src [n];
    return dest;
}
