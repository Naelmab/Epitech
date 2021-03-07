/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** destroy sprites
*/

#include "my.h"

void destroy(Initialisation *init)
{
    sfRenderWindow_destroy(init->window);
    sfClock_destroy(init->clock);
    sfSprite_destroy(init->dragon.sprite);
    sfSprite_destroy(init->background2.sprite);
    sfSprite_destroy(init->background.sprite);
    sfMusic_destroy(init->music.music_jeu);
    sfMusic_destroy(init->music.music_pouf);
    sfSound_destroy(init->music.sound_pitie);
    sfSoundBuffer_destroy(init->music.buff_pitie);
}
