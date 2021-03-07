/*
** EPITECH PROJECT, 2021
** anime
** File description:
** anime
*/

#include "../my_h/my.h"

void ennemy_spawn(Initialisation *init)
{
    if (init->ducks.pos.x < -100 && init->game_is_run == 1)
        init->ducks.pos.x = 2000;
    if (init->nuage1.pos.x < -100 && init->game_is_run == 1)
        init->nuage1.pos.x = 2000;
    if (init->nuage2.pos.x < -100 && init->game_is_run == 1)
        init->nuage2.pos.x = 2000;
    if (init->nuage3.pos.x < -100 && init->game_is_run == 1)
        init->nuage3.pos.x = 2000;
    if (init->background.pos.x < -416 && init->game_is_run == 1)
        init->background.pos.x = 2000;
}
