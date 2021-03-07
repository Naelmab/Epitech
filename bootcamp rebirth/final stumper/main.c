/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include "rush3.h"

#define BUFF_SIZE (20000)

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset;
    int len;

    offset = 0;
    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
    {
        offset += len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    if (offset == 0)
        return (84);
    rush3(buff);
    return (0);
}
