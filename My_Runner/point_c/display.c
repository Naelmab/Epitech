/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

#include "my.h"

void display_game(Initialisation *init)
{
    sfSprite_setPosition(init->paralaxsol1.sprite, init->paralaxsol1.pos);
    sfSprite_setPosition(init->paralaxsol2.sprite, init->paralaxsol2.pos);
    sfRenderWindow_clear(init->windows.window, sfWhite);
    sfRenderWindow_drawSprite(init->windows.window, init->paralaxsol2.sprite,
                              NULL);
    sfRenderWindow_drawSprite(init->windows.window, init->paralaxsol1.sprite,
    NULL);
    sfSprite_setTextureRect(init->ducks.sprite, init->ducks.rect);
    sfRenderWindow_drawSprite(init->windows.window, init->ducks.sprite, NULL);
    if (init->m == 2) {
        sfSprite_setTextureRect(init->dino2.sprite, init->dino2.rect);
        sfRenderWindow_drawSprite(init->windows.window, init->dino2.sprite,
                                  NULL);
    } else {
        sfSprite_setTextureRect(init->dino.sprite, init->dino.rect);
        sfRenderWindow_drawSprite(init->windows.window, init->dino.sprite,
                                  NULL);
    }
    sfRenderWindow_display(init->windows.window);
}

void display_gameover(Initialisation *init)
{

}