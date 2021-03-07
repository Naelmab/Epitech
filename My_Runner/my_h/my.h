/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef _MY_H_
# define _MY_H_

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
    t_sprite paralaxsol1;
    t_sprite paralaxsol2;
    t_sprite ducks;
    t_sprite dino;
    t_sprite dino2;
    int game_is_run;
    int n;
    int m;
}   Initialisation;

Initialisation *windows(void);

//fonctions
sfVector2f pos(double x, double y);
sfIntRect rect(int top, int left, int width, int height);
void counter(Initialisation *init);
void move(Initialisation *init);

//jump
void dinojump_manage(Initialisation *init);

//slide
void dino_anime_slide(Initialisation *init);

//hitbox
void hitbox(Initialisation *init);
void hitbox2(Initialisation *init);

//display
void display_game(Initialisation *init);
void display_gameover(Initialisation *init);

//animation
t_sprite duck1rev(void);
void duck_anime(Initialisation *init);
void dino_anime(Initialisation *init);
void animation(Initialisation *init);

//parrallax
void sol_parralx(Initialisation *init);
t_sprite sol1(void);
t_sprite sol2(void);

//music
void musichome(Initialisation *init);
void music(Initialisation *init);
void musicover(Initialisation *init);

//instance
void clicktoplay(Initialisation *init);
void gameplay(Initialisation *init);
void gameover(Initialisation *init);

#endif