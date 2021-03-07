/*
** EPITECH PROJECT, 2021
** init.c
** File description:
** init function for my defender.
*/

#include "../include/my.h"

Initialisation    *windows(void)
{
    Initialisation *init = malloc(sizeof(Initialisation));
    init->music.music = 0;
    init->game_is_run = 0;
    init->windows = window_size();
    init->time.clock = sfClock_create();
    init->background = background();
    return (init);
}
