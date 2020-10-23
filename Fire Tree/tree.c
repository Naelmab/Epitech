/*
** EPITECH PROJECT, 2020
** tree.c
** File description:
** "turn by turn"
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(int size)
{
    char rline = '\n';
    char space = ' ';
    char trunk = '|';
    char star = '*';
    int z = '0';
    int i = '1';
    size = '4';
    int x = '0';
    while (x < size)
    {
			if (size %2 != 1) {
            my_putchar(trunk);
            x++;
            if ( x == size) my_putchar(trunk);
		} else {
			my_putchar(trunk);
            x++;
        }
    }
    my_putchar(rline);
    return (0);
}
