/*
** EPITECH PROJECT, 2021
** game.c
** File description:
** game function for my defender.
*/

#include "../include/my.h"

void    display_game(Initialisation *init)
{
    sfRenderWindow_setMouseCursorVisible(init->windows.window, true);
    sfSprite_setPosition(init->background.sprite, init->background.pos);
    sfRenderWindow_clear(init->windows.window, sfWhite);
    sfSprite_setTextureRect(init->background.sprite, init->background.rect);
    sfSprite_setTextureRect(init->background.sprite, init->background.rect);
    sfRenderWindow_drawSprite(init->windows.window, init->background.sprite,
    NULL);
    sfRenderWindow_drawSprite(init->windows.window, init->bloon.sprite, NULL);
    sfRenderWindow_display(init->windows.window);
}
