/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** strncopy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int m = 0;
    while (dest[m] != src[n]) {
        dest[m] = src[m];
        m++;
    }
    if (n > m)
        dest[m] = '\0';
    return (dest);
}
