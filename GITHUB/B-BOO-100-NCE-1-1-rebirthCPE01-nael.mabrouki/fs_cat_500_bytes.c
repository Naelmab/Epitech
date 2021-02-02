/*
** EPITECH PROJECT, 2021
** BS BSQ
** File description:
** step 2
*/

#include "my.h"

void display_500(char *str)
{
    int n = 0;
    int m = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
        m++;
        if (m == 500)
            break;
    }
}

void fs_cat_500_bytes(char const *filepath )
{
    int size = size_files(filepath);
    char str[size];
    int fd = open(filepath, O_RDONLY);

    read(fd, str, size);
    display_500(str);
}
