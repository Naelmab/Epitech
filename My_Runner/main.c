/*
** EPITECH PROJECT, 2020
** main runner
** File description:
** main runner
*/

#include "my.h"

void animation(Initialisation *init)
{
    double seconds = init->time.time.microseconds / 1000000.0;
    if (seconds > 0.09) {
        duck_anime(init);
        if (init->m == 0)
            dino_anime(init);
        sfClock_restart(init->time.clock);
    }
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

void dinojump(Initialisation *init)
{
    if (init->n %2 == 0 && init->n <= 10) {
        init->dino.pos.y -= 15;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n <= 40) {
        init->dino.pos.y -= 8;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n <= 50) {
        init->dino.pos.y -= 5;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
}

void dinofall(Initialisation *init)
{
    if (init->n %2 == 0 && init->n >= 50) {
        init->dino.pos.y += 5;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n >= 60) {
        init->dino.pos.y += 8;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
    if (init->n %2 == 0 && init->n >= 90) {
        init->dino.pos.y += 15;
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
}

void dinojump_manage(Initialisation *init) {
    if (init->m == 1 && init->n != 100)
        init->n++;
    dinojump(init);
    dinofall(init);
    if (init->n == 100) {
        init->dino.pos = pos(10, 825);
        sfSprite_setPosition(init->dino.sprite, init->dino.pos);
    }
}

void counter(Initialisation *init)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && init->m == 0){
        init->music.music_jump = sfMusic_createFromFile
            ("sons/Star Wars DC-15A Blaster Rifle Sound Effect (mp3cut.net).ogg");
        sfMusic_play(init->music.music_jump);
        init->m = 1;}
    if (init->n == 100) {
        init->n = 0;
        init->m = 0;
        sfMusic_destroy(init->music.music_jump);
    }
}

void music(Initialisation *init)
{
    if (init->music.music == 0){
        init->music.musique_fond = sfMusic_createFromFile
            ("sons/Duck Hunt Medley Super Smash Bros. Ultimate.ogg");
        sfMusic_play(init->music.musique_fond);
        init->music.music = 1;
    }
}

void gameplay(Initialisation *init)
{
    music(init);
    display_game(init);
    move(init);
    counter(init);
    if (init->m == 1)
        dinojump_manage(init);
    hitbox(init);
}

int main(void)
{
    Initialisation *init = windows();

    while (sfRenderWindow_isOpen(init->windows.window)) {
        while (sfRenderWindow_pollEvent(init->windows.window, &init->event)) {
            if (init->event.type == sfEvtClosed)
                sfRenderWindow_close(init->windows.window);
        }
        gameplay(init);
    }
    sfMusic_destroy(init->music.musique_fond);
    free(init);
    return (0);
}
