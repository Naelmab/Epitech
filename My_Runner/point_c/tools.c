/*
** EPITECH PROJECT, 2021
** tools
** File description:
** tools
*/

#include "my.h"

sfIntRect rect(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return rect;
}

sfVector2f pos(double x, double y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return pos;
}

void move(Initialisation *init)
{
    init->time.time = sfClock_getElapsedTime(init->time.clock);
    animation(init);
    init->ducks.pos.x -= sfTime_asSeconds(init->time.time) * 250;
    sol_parralx(init);
    sfSprite_setPosition(init->paralaxsol1.sprite, init->paralaxsol1.pos);
    sfSprite_setPosition(init->paralaxsol2.sprite, init->paralaxsol2.pos);
    sfSprite_setPosition(init->ducks.sprite, init->ducks.pos);
}

void counter(Initialisation *init)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && init->m == 0) {
        init->music.music_jump = sfMusic_createFromFile
            ("sons/Star Wars DC-15A Blaster Rifle Sound Effect (mp3cut.net).ogg");
        sfMusic_play(init->music.music_jump);
        init->m = 1;
    }
    if (init->n == 100) {
        init->n = 0;
        init->m = 0;
        sfMusic_destroy(init->music.music_jump);
    }
}