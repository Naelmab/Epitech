/*
** EPITECH PROJECT, 2020
** rush-1-3.c
** File description:
** A function that display a square.
*/

int    borderHorizon3(char corner1, char corner2, char b, int x, int i, int y)
{
    i = 0;
    if (x == 1 || y == 1)
    {
        corner1 = 'B';
        corner2 = 'B';
        if ( x >= i)
        {
            if (i <= x -2)
            {
                while ( i != x-2)
                {
                    my_putchar(b);
                    i++;
                }
            }
        }
    }
    if (x > 1 || y > 1)
    {
        my_putchar(corner1);
        if ( x >= i)
        {
            if (i <= x -2)
            {
                while ( i != x-2)
                {
                    my_putchar(b);
                    i++;
                }
                if (x > 1)
                {
                    my_putchar(corner1);
                }
            } else {
                return(0);
            }
        }
    }
}

int    borderHorizon4(char corner1, char corner2, char b, int x, int i, int y)
{
    i = 0;
    if (x == 1 || y == 1)
    {
        corner1 = 'B';
        corner2 = 'B';
        if ( x >= i)
        {
            if (i <= x -2)
            {
                while ( i != x-2)
                {
                    my_putchar(b);
                    i++;
                }
            }
        }
    }
    if (x > 1 || y > 1)
    {
        my_putchar(corner2);
        if ( x >= i)
        {
            if (i <= x -2)
            {
                while ( i != x-2)
                {
                    my_putchar(b);
                    i++;
                }
                if (x > 1)
                {
                    my_putchar(corner2);
                }
            } else {
                return(0);
            }
        }
    }
}

int    borderVerti(char c, char space, int x, int i, int y, int t, char corner1, char corner2)
{
    t = 0;
    i = 0;
    if (x == 1 || y == 1)
    {
        corner1 = 'B';
        corner2 = 'B';
        space = 'B';

        while (t != y-2)
        {        my_putchar(c);
            if ( y >= i)
            {
                if (i <= y-2)
                {
                    while ( i < x-2)
                    {
                        my_putchar(space);
                        i++;
                    }
                    if (x > 1)
                    {
                        my_putchar(c);
                    }
                } else {
                    return(0);
                }
                t++;
                return(1);
            }
        }
    } else {
        while (t != y-2)
        {        my_putchar(c);
            if ( y >= i)
            {
                if (i <= y-2)
                {
                    while ( i < x-2)
                    {
                        my_putchar(space);
                        i++;
                    }
                    if (x > 1)
                    {
                        my_putchar(c);
                    }
                } else {
                    return(0);
                }
                t++;
                return(1);
            }
        }
    }
}

void    rush(int x, int y)
{
    char corner1 = 'A', corner2 = 'C', b = 'B', c = 'B',space = ' ';
    char rline = '\n';

    int i, t = 0;
    if (x == 1 && y == 1) my_putchar(b);
    if (x <= 0 || y <= 0) write(2, &"Invalid size\n" , 13);
    else {
        borderHorizon3(corner1, corner2, b, x, i, y);
        my_putchar(rline);
        if (y > 1) {
            while (t != y-2) {
				borderVerti(c, space, x, i, y, t, corner1, corner2);
                my_putchar(rline);
                t++;
            } 
            }else{ return;
        }
        if (x >= 1) borderHorizon4(corner1, corner2, b, x, i, y);
        else return;
        my_putchar('\n');
        }
}

