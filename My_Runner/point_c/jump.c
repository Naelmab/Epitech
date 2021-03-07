/*
** EPITECH PROJECT, 2021
** dinojump
** File description:
** dinojump
*/

#include "my.h"

void dinojump(Initialisation *init)
{
    if (init->n %2 == 0 && init->n <= 10) {
        init->dino.pos.y -= 15;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n <= 40) {
        init->dino.pos.y -= 8;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n <= 50) {
        init->dino.pos.y -= 5;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
}

void dinofall(Initialisation *init)
{
    if (init->n %2 == 0 && init->n >= 50) {
        init->dino.pos.y += 5;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n >= 60) {
        init->dino.pos.y += 8;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n >= 90) {
        init->dino.pos.y += 15;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
}

void dinojump_manage(Initialisation *init) {
    if (init->m == 1 && init->n != 100)
        init->n++;
    dinojump(init);
    dinofall(init);
    if (init->n == 100) {
        init->dino.pos = pos(10, 825);
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
}