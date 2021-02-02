/*
** EPITECH PROJECT, 2021
** BS-BSQ
** File description:
** step1
*/

#include "my.h"

int fs_open_file(char const *filepath)
{
    open(filepath, O_RDONLY);
    if (open(filepath, O_RDONLY) == -1) {
        my_putstr("FAILLURE\n");
        return 84;
    }
    else
        my_putstr("SUCCESS\n");
    return 0;
}
