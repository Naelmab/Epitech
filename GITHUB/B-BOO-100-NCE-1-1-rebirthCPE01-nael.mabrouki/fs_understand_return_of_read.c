/*
** EPITECH PROJECT, 2021
** BS BSQ
** File description:
** step 2
*/

#include "my.h"

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    fd = open(av, O_RDONLY);
    if (fd == -1)
        my_putstr("read failed\n");
    else if (fd == 0)
        my_putstr("read has nothing to read\n");
    else if ( < size)
        my_putstr("read didn't complete the entire buffer\n");
    else if ( == size)
        my_putstr("read completed the entire buffer\n");
}
