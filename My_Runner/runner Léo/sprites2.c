/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** sprites
*/

#include "my.h"

Background data_background2(void)
{
    Background background;
    background.position.x = 500;
    background.position.y = 500;
    background.tx_rect.left = 0;
    background.tx_rect.top = 0;
    background.tx_rect.width = 1920;
    background.tx_rect.height = 1080;
    background.sprite = sfSprite_create();
    background.texture =
    sfTexture_createFromFile("ressources/gaby.png", &background.tx_rect);
    sfSprite_setTexture(background.sprite, background.texture, sfTrue);
    return (background);
}
