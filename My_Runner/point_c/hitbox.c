/*
** EPITECH PROJECT, 2021
** hitbox
** File description:
** hitbox
*/

#include "my.h"

void hitbox(Initialisation *init)
{
    sfVector2f dinopos = sfSprite_getPosition(init->dino.sprite);
    sfVector2f duckpos = sfSprite_getPosition(init->ducks.sprite);
    if (dinopos.x - duckpos.x < 110 &&
        dinopos.x - duckpos.x > -150 &&
        dinopos.y - duckpos.y < 100 &&
        dinopos.y - duckpos.y > -100) {
        init->ducks.pos.x = 1920;
        init->ducks.pos.y = 800;
    }
}

void hitbox2(Initialisation *init)
{
    sfVector2f dinopos = sfSprite_getPosition(init->dino2.sprite);
    sfVector2f duckpos = sfSprite_getPosition(init->ducks.sprite);
    if (dinopos.x - duckpos.x < 110 &&
        dinopos.x - duckpos.x > -150 &&
        dinopos.y - duckpos.y < 10 &&
        dinopos.y - duckpos.y > -100) {
        init->ducks.pos.x = 1920;
        init->ducks.pos.y = 800;
    }
}