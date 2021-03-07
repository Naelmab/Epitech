/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** music and sounds
*/

#include "my.h"

Initialisation *init_window(void)
{
    Initialisation *init = malloc(sizeof(Initialisation));
    sfVideoMode video_mode = {1920, 1080, 32};
    init->window =
    sfRenderWindow_create(video_mode, "My Gaby", sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(init->window, 60);
    init->plan = sfColor_fromRGB(64, 64, 80);
    init->clock = sfClock_create();
    init->clock_speed = sfClock_create();
    init->time = sfTime_Zero;
    init->time_speed = sfTime_Zero;
    init->music = data_music();
    init->dragon = data_drake();
    init->heart = data_heart();
    init->scope = data_scope();
    init->background = data_background();
    init->background2 = data_background2();
    init->score = 0;
    init->death = 0;
    init->is_Running = 1;
    return (init);
}

void move(Initialisation *init)
{
    init->time_speed = sfClock_getElapsedTime(init->clock_speed);
    init->time_speed.microseconds /= 1000;
    if (init->time_speed.microseconds > 1.6 && init->is_Running == 1)  {
        init->dragon.position.x += 10 + init->dragon.speed;
        sfClock_restart(init->clock_speed);
    }
    if (init->dragon.position.x > 1920 && init->is_Running == 1) {
        init->dragon.position.x = 0;
        if (init->dragon.position.y > 800)
            init->dragon.position.y = 0;
        init->dragon.position.y += 100;
        init->dragon.speed += 5;
        init->heart.tx_rect.top += 40;
        init->death++;
        my_putstr("Death: ");
        my_put_nbr(init->death);
        my_putchar('\n');
    }
}

void death(Initialisation *init)
{
    if (init->death == 5)
        init->is_Running = 0;
}

int main(void)
{
    Initialisation *init = init_window();

    museak(init);
    while (sfRenderWindow_isOpen(init->window)) {
        while (sfRenderWindow_pollEvent(init->window, &init->event)) {
            if (init->event.type == sfEvtClosed)
                sfRenderWindow_close(init->window);
        }
        move(init);
        mouse(init);
        affichage(init);
        interactive_museak(init);
        death(init);
    }
    destroy(init);
    free(init);
    return (0);
}
