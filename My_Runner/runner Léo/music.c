/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** music and sounds
*/

#include "my.h"

void museak(Initialisation *init)
{
    sfMusic_play(init->music.music_jeu);
    sfMusic_setLoop(init->music.music_jeu, sfTrue);
}

void interactive_museak(Initialisation *init)
{
    if (init->music.is_dead == 0 && init->death == 5) {
        init->music.is_dead = 1;
        sfMusic_setVolume(init->music.music_jeu, 10);
        sfMusic_play(init->music.music_pouf);
    }
}
