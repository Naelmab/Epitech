/*
** EPITECH PROJECT, 2021
** myh
** File description:
** myh
*/

#ifndef _MY_H_
# define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <curses.h>
#include <termios.h>

typedef struct initialisation_s {
    int posX;
    int posY;
    int *nbr_o;
    int win;
    int lose;
} initialisation;

//condition.c
int loose (char ** tab);
int win (char ** tab, initialisation init);
void screenlose();

//display.c
initialisation screen(char **, initialisation pos, char *);
int display_map(char *, char **);

//file.c
int size_files(char *);
void sizemap(char *, char **);

//ligne_colones.c
int lignes(char const *);
int colones(char **);
int nbligne(char *str);

//main.c
int main(int, char **);

//move.c
initialisation   deplacement(char **, initialisation init, char *);
void up (char ** tab, initialisation init);
void down (char ** tab, initialisation init);
void left (char ** tab, initialisation init);
void right (char ** tab, initialisation init);

//pos.c
initialisation posx_y(int, int);
initialisation pos_p(char **);
int nbr_o(char **tab);
int nbr_x(char **tab);
void pos_o(char **map, int *nbro);


//sokoban.c
void init_sokoban();
int close_sokoban_0();
int close_sokoban_1();
int restart_sokoban(char *);

//tools.c
int my_strlen(char const *);
int check (char **tab);
void h (void);
char **strtotab(char *);

#endif
