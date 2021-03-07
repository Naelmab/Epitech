/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function my defender.
*/

#include "../include/my.h"

int    main(void)
{
    Initialisation *init = windows();

    while (sfRenderWindow_isOpen(init->windows.window)) {
        while (sfRenderWindow_pollEvent(init->windows.window, &init->event)) {
            if (init->event.type == sfEvtClosed)
                sfRenderWindow_close(init->windows.window);
        }
        display_game(init);
    }
    free(init);
    return (0);
}
