/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//create enemy
typedef struct Figure {
    sfVector2f position;
    int width;
    int height;
    int speed;
    sfIntRect tx_rect;
    sfSprite *sprite;
    sfTexture *texture;
    sfTexture *texture2;
    sfVector2f scale;
}   Figure;

typedef struct Background {
    sfVector2f position;
    sfIntRect tx_rect;
    sfSprite *sprite;
    sfTexture *texture;
}   Background;

typedef struct Music {
    int is_dead;
    sfMusic *music_jeu;
    sfSound *sound_pitie;
    sfSoundBuffer *buff_pitie;
    sfMusic *music_pouf;
}   Music;

typedef struct Initialisation {
    sfRenderWindow *window;
    sfColor plan;
    sfClock *clock;
    sfClock *clock_speed;
    sfTime time;
    sfTime time_speed;
    Music music;
    sfEvent event;
    Figure dragon;
    Figure heart;
    Figure scope;
    Background background;
    Background background2;
    int score;
    int death;
    int is_Running;
}   Initialisation;

Figure data_drake(void);
Figure data_heart(void);
Figure data_scope(void);
Music data_music(void);
Background sol1(void);
Background data_background2(void);
void affichage(Initialisation *init);
void affichageV2(Initialisation *init);
void destroy(Initialisation *init);
void mouse(Initialisation *init);
void mouse2(Initialisation *init);
void mouse3(Initialisation *init);
void museak(Initialisation *init);
void interactive_museak(Initialisation *init);
void death(Initialisation *init);
void my_putchar(char c);
void my_putstr(char *str);
int my_put_nbr(int nb);
Initialisation *init_window();

#endif
