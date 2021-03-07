/*
** EPITECH PROJECT, 2021
** struct.c
** File description:
** struct function for my defender.
*/

#include "../include/my.h"

t_sprite    window_size(void)
{
    t_sprite windows;
    sfVideoMode mode = {1920, 1080, 32};
    windows.window = sfRenderWindow_create(mode, "My_Defender",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(windows.window, 60);
    return windows;
}

t_sprite    background(void)
{
    t_sprite background;
    background.rect = rect(0, 0, 600, 400);
    background.texture = sfTexture_createFromFile("resources/map.png",
    NULL);
    background.sprite = sfSprite_create();
    sfSprite_setTexture(background.sprite, background.texture, false);
    background.pos = pos(0, 0);
    sfSprite_setPosition(background.sprite, background.pos);
    background.scale = pos(3.45, 3);
    sfSprite_setScale(background.sprite, background.scale);
    return background;
}

t_sprite    bloon(void)
{
    t_sprite bloon;
    bloon.rect = rect(0, 0, 148, 125);
    bloon.texture = sfTexture_createFromFile("resources/bloons.png", NULL);
    bloon.sprite = sfSprite_create();
    sfSprite_setTexture(bloon.sprite, bloon.texture, false);
    bloon.pos = pos(0, 0);
    sfSprite_setPosition(bloon.sprite, bloon.pos);
    return bloon;
}