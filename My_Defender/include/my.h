/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdbool.h>
#include <SFML/Window/Mouse.h>

typedef struct s_sprite
{
    sfRenderWindow *window;
    sfIntRect       rect;
    sfTexture      *texture;
    sfSprite*       sprite;
    sfVector2f      scale;
    sfVector2f      pos;
}              t_sprite;

typedef struct s_clock
{
    sfClock *clock;
    sfTime time;
}             t_clock;

typedef struct Music {
    int music;
    sfMusic *music_jump;
    sfMusic *musique_fond;
}   Music;

typedef struct Initialisation {
    Music music;
    t_clock time;
    sfEvent event;
    t_sprite windows;
    t_sprite background;
    t_sprite bloon;
    int game_is_run;
    int n;
    int m;
}   Initialisation;

/*init.c*/
Initialisation *windows(void);

/*tools.c*/
sfVector2f pos(double x, double y);
sfIntRect rect(int top, int left, int width, int height);

/*main.c*/
int main(void);

/*game.c*/
void display_game(Initialisation *init);

/*struct.c*/
t_sprite window_size(void);
t_sprite background(void);

#endif
