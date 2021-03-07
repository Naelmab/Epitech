/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** mouse
*/

#include "my.h"

void mouse(Initialisation *init)
{
    sfRenderWindow_setMouseCursorVisible(init->window, sfFalse);
        if (init->event.type == sfEvtMouseMoved)
            mouse3(init);
        if (init->event.type == sfEvtMouseButtonPressed &&
            init->event.mouseButton.button == sfMouseLeft) {
        sfMouse_getPositionRenderWindow(init->window);
        if (init->scope.position.x - init->dragon.position.x < 70 &&
            init->scope.position.x - init->dragon.position.x > -70 &&
            init->scope.position.y - init->dragon.position.y < 70 &&
            init->scope.position.y - init->dragon.position.y > -70) {
            init->score++;
            mouse2(init);
        }
    }
}

void mouse2(Initialisation *init)
{
    my_putstr("Score: ");
    my_put_nbr(init->score);
    my_putchar('\n');
    init->dragon.position.x = 0;
    if (init->dragon.position.y > 800)
        init->dragon.position.y = 0;
    init->dragon.position.y += 100;
    sfSound_play(init->music.sound_pitie);
}

void mouse3(Initialisation *init)
{
    if (init->is_Running == 1) {
        init->scope.position.x = init->event.mouseMove.x;
        init->scope.position.y = init->event.mouseMove.y;
    }
    else {
        init->background2.position.x = init->event.mouseMove.x;
        init->background2.position.y = init->event.mouseMove.y;
    }
}