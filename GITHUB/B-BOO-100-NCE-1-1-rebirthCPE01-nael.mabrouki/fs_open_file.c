/*
** EPITECH PROJECT, 2021
** BS-BSQ
** File description:
** step1
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int fs_open_file(char const *filepath)
{
    open(filepath, O_RDONLY);
    if (open(filepath, O_RDONLY) == -1) {
        printf("FAILLURE\n");
        return 84;
    }
    else
        printf("SUCCESS\n");
    return 0;
}