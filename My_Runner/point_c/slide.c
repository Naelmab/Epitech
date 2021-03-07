/*
** EPITECH PROJECT, 2021
** slide
** File description:
** slide
*/

#include "my.h"

void dino_slide_manage(Initialisation *init)
{
    init->m = 0;
    if (sfKeyboard_isKeyPressed(sfKeyDown) && init->m == 0 && init->m != 1)
        init->m = 2;
    hitbox2(init);
}