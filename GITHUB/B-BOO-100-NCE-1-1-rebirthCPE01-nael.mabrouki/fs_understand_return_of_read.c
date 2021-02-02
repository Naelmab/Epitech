/*
** EPITECH PROJECT, 2021
** BS BSQ
** File description:
** step 2
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    fd = open(av, O_RDONLY);
    if (fd == -1)
        printf("read failed\n");
    else if (fd == 0)
        printf("read has nothing to read\n");
    else if ( < size)
        printf("read didn't complete the entire buffer\n");
    else if ( == size)
        printf("read completed the entire buffer\n");
}
