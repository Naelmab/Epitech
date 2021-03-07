/*
** EPITECH PROJECT, 2021
** tools
** File description:
** tools
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int variable = 0;

    while (str[variable] != '\0')
        variable = variable + 1;
}

int check (char **tab)
{
    int x = 0;
    int y;

    while (tab[x] != NULL) {
        y = 0;
        while (tab[x][y] != '\0') {
            if (tab[x][y] == 'P' || tab[x][y] == '#' || tab[x][y] == 'O' ||
            tab[x][y] == ' ' || tab[x][y] == 'X')
                y++;
            else
                close_sokoban_1();
        }
        x++;
    }
}

void my_putstr (char *str)
{
    int n = 0;

    while (str[n] != '\0')
    {
        write(1, &str[n], 1);
        n++;
    }
}

void h (void)
{
    my_putstr("USAGE\n"
    "   ./my_sokoban map\n"
    "DESCRIPTION\n"
    "   map file representing the warehouse map, containing ‘#’ for walls, \n"
    "        ‘P’ for the player, ‘X’ for boxes and ‘O’ for storage "
    "locations.\n");
}

char **strtotab(char *str)
{
    int n = 0;
    int m;
    int a = 0;
    char **tab;

    tab = malloc(sizeof(char *) * nbligne(str) + 1);
    tab[nbligne(str)] = NULL;
    while (str[n] != 0) {
        m = 0;
        tab[a] = malloc(sizeof(char *) * lignes(str) + 1);
        while (str[n] != '\n' && tab[a] != NULL) {
            tab[a][m] = str[n];
            n++;
            m++;
        }
        a++;
        n++;
    }
    return tab;
}
