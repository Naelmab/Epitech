/*
** EPITECH PROJECT, 2020
** rush-1-4.c
** File description:
** A function that display a square.
*/

int    borderHorizon5(char corner1, char corner2, char b, int x, int i, int y)
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
                    my_putchar(corner2);
                }
            } else {
                return(0);
            }
        }
    }
}

int    borderHorizon6(char corner1, char corner2, char b, int x, int i, int y)
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
                    my_putchar(corner2);
                }
            } else {
                return(0);
            }
        }
    }
}

int    borderVerti2(char c, char space, int x, int i, int y, int t, char corner1, char corner2)
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
    char corner1 = 'A';
    char corner2 = 'C';
    char b = 'B';
    char c = 'B';
    char space = ' ';
    char rline = '\n';
    
    int i;
    int t;
    if (x == 1 && y == 1)
    {
        my_putchar(b);
    }
    
    if (x <= 0 || y <= 0)
    {
        write(2, &"Invalid size\n" , 13);
    } else {
        borderHorizon5(corner1, corner2, b, x, i, y);
        my_putchar(rline);
        if (y > 1)
        {
            while (t != y-2)
            {
                borderVerti2(c, space, x, i, y, t, corner1, corner2);
                my_putchar(rline);
                t++;
            }
        } else {
            return(0);
        }
        if (x >= 1)
        {
            borderHorizon6(corner1, corner2, b, x, i, y);
        } else {
            return(0);
            my_putchar('\n');
        }
    }
}

