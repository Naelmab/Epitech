/*
** EPITECH PROJECT, 2021
** bs bsq
** File description:
** bs bsq
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int fs_open_file(char const *filepath)
{
    open(filepath, O_RDONLY);
    if (open(filepath, O_RDONLY) == -1)
        return 84;
    else
        return 0;
}

int     my_strlen(char const *str)
{
    int m = 0;

    while (str[m] != '\0')
        m = m + 1;
    return (m);
}

char    *mem_alloc(char const *a, char const *b)
{
    int m = 0;
    int e = 0;
    int v = my_strlen(a);
    int n = my_strlen(b);
    char *len;

    len = malloc((v + n + 1) * sizeof(*len));
    while (e < v) {
        len[e] = a[e];
        e++;
    }
    while (e < n + v) {
        len[e] = b[m];
        m++;
        e++;
    }
    len[e] = '\0';
    return (&len);
}

int main (int ac, char** av)
{
    if (ac != 3)
        return 84;
    mem_alloc(av[1], av[2]);
    return 0;
}