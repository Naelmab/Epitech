/*
** EPITECH PROJECT, 2020
** rush-1-1.c
** File description:
** Show square and different size
*/

int borderH(char corner, char b, int x, int i)
{
    i = 0;
    my_putchar(corner);
    if ( x >= i) {
        if (i <= x -2) {
            while ( i != x-2) {
                my_putchar(b);
                i++;
            }
            if (x > 1) my_putchar(corner);
        }
        else return (0);
    }
}

int    borderV(char c, char space, int x, int i, int y, int t)
{
    t = 0;
    i = 0;
    while (t != y-2)
    {
        my_putchar(c);
        if ( y >= i) {
            if (i <= y-2) {
                while ( i < x-2) {
                    my_putchar(space);
                    i++;
                }
                if (x > 1) my_putchar(c);
            }
            else return (0);
            t++;
            return (1);
        }
    }
}

void    rush(int x, int y)
{
    char corner = 'o', b = '-', c = '|', space = ' ', rline = '\n';
    int i, t = 0;
    if (x <= 0 || y <= 0) write(2, &"Invalid size\n" , 13);
    else {
        borderH(corner, b, x, i);
        my_putchar(rline);
        if (y > 1) {
            while (t != y-2) {
                borderV(c, space, x, i, y, t);
                my_putchar(rline);
                t++; }
        }
        else return;
        if (x >= 1) borderH(corner, b, x, i);
        else return;
        my_putchar('\n');
    }
}
