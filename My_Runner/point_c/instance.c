/*
** EPITECH PROJECT, 2021
** instance
** File description:
** de jeu
*/

#include "my.h"

void clicktoplay(Initialisation *init)
{
    musichome(init);
    display_homegame(init);
}

void gameplay(Initialisation *init)
{
    music(init);
    display_game(init);
    move(init);
    counter(init);
    if (init->m == 1)
        dinojump_manage(init);
    if (init->m != 1)
        dino_slide_manage(init);
    if (init->m != 2)
        hitbox(init);
}

void gameover(Initialisation *init)
{
    musicover(init);
    display_gameover(init);
    move(init);
}