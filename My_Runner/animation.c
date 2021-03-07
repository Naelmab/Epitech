/*
** EPITECH PROJECT, 2021
** anime
** File description:
** anime
*/

#include "my.h"

void duck_anime(Initialisation *init)
{
    switch (init->ducks.rect.left) {
        case 0:
            init->ducks.rect.left += 110;
            sfSprite_setTextureRect(init->ducks.sprite, init->ducks.rect);
            break;
        case 110:
            init->ducks.rect.left += 110;
            sfSprite_setTextureRect(init->ducks.sprite, init->ducks.rect);
            break;
        case 220:
            init->ducks.rect.left = 111;
            sfSprite_setTextureRect(init->ducks.sprite, init->ducks.rect);
            break;
        case 111:
            sfSprite_setTextureRect(init->ducks.sprite, init->ducks.rect);
            init->ducks.rect.left = 0;
            break;
    }
}

void dino_anime(Initialisation *init)
{
    switch (init->dino.rect.left) {
        case 5:
            init->dino.rect.left = 85;
            sfSprite_setTextureRect(init->dino.sprite, init->dino.rect);
            break;
        case 85:
            init->dino.rect.left = 5;
            sfSprite_setTextureRect(init->dino.sprite, init->dino.rect);
            break;
    }
}

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

void sol_parralx(Initialisation *init)
{
    if (init->paralaxsol1.pos.x >= -3900 && init->paralaxsol1.pos.x <= -15) {
        init->paralaxsol2.pos.x = 1910;
        init->paralaxsol1.pos.x -= sfTime_asSeconds(init->time.time) * 200;
    }
    if (init->paralaxsol1.pos.x >= -5950 && init->paralaxsol1.pos.x <= -3899) {
        init->paralaxsol1.pos.x -= sfTime_asSeconds(init->time.time) * 200;
        init->paralaxsol2.pos.x -= sfTime_asSeconds(init->time.time) * 200;
    }
    if (init->paralaxsol2.pos.x >= -3900 && init->paralaxsol2.pos.x <= -15) {
        init->paralaxsol2.pos.x -= sfTime_asSeconds(init->time.time) * 200;
        init->paralaxsol1.pos.x = 1910;
    }
    if (init->paralaxsol2.pos.x >= -5950 && init->paralaxsol2.pos.x <= -3899) {
        init->paralaxsol1.pos.x -= sfTime_asSeconds(init->time.time) * 200;
        init->paralaxsol2.pos.x -= sfTime_asSeconds(init->time.time) * 200;
    }
}