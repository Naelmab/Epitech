/*
** EPITECH PROJECT, 2021
** tools.c
** File description:
** tools function for my defender.
*/

#include "../include/my.h"

sfIntRect    rect(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return rect;
}

sfVector2f    pos(double x, double y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return pos;
}
