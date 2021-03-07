/*
** EPITECH PROJECT, 2020
** main runner
** File description:
** main runner
*/

#include "my.h"

int main(void)
{
    Initialisation *init = windows();

    while (sfRenderWindow_isOpen(init->windows.window)) {
        while (sfRenderWindow_pollEvent(init->windows.window, &init->event)) {
            if (init->event.type == sfEvtClosed)
                sfRenderWindow_close(init->windows.window);
        }
        if (init->game_is_run == 0)
            clicktoplay(init);
        if (init->game_is_run == 1)
            gameplay(init);
        if (init->game_is_run == 2)
            gameover(init);
    }
    sfMusic_destroy(init->music.musique_fond);
    free(init);
    return (0);
}
