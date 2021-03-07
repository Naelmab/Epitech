/*
** EPITECH PROJECT, 2021
** music
** File description:
** music
*/

#include "my.h"

void musichome(Initialisation *init)
{
    if (init->music.music == 0){
        init->music.musique_fond = sfMusic_createFromFile
            ("sons/Duck Hunt Medley Super Smash Bros. Ultimate.ogg");
        sfMusic_play(init->music.musique_fond);
        init->music.music = 1;
    }
}

void music(Initialisation *init)
{
    if (init->music.music == 0){
        init->music.musique_fond = sfMusic_createFromFile
            ("sons/Duck Hunt Medley Super Smash Bros. Ultimate.ogg");
        sfMusic_play(init->music.musique_fond);
        init->music.music = 1;
    }
}

void musicover(Initialisation *init)
{
    if (init->music.music == 0){
        init->music.musique_fond = sfMusic_createFromFile
            ("sons/Duck Hunt Medley Super Smash Bros. Ultimate.ogg");
        sfMusic_play(init->music.musique_fond);
        init->music.music = 1;
    }
}