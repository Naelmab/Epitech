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

void fs_understand_return_of_read (int fd , char * buffer , int size )
{
    if ( == -1) {
        printf("read failed\n");
        return 84;
    } else if ( == 0) {
        printf("read has nothing to read\n");
        return 0;
    } else if ( < size){
        printf("read didn't complete the entire buffer\n");
        return 0;
    } else if ( == size) {
        printf("read completed the entire buffer\n");
        return 0;
    }
}

int main (int ac, char **av)
{
    if (ac != 2)
        return 84;
    fs_understand_return_of_read();
    return 0;
}