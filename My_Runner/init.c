/*
** EPITECH PROJECT, 2021
** initialisation
** File description:
** initialisation
*/

#include "my.h"

t_sprite duck1rev(void)
{
    t_sprite ducks;
    ducks.rect = rect(0, 220, 110, 110);
    ducks.texture = sfTexture_createFromFile("duck (1) reverse.png",
    NULL);
    ducks.sprite = sfSprite_create();
    sfSprite_setTexture(ducks.sprite, ducks.texture, false);
    ducks.pos = pos(1920, 800);
    sfSprite_setPosition(ducks.sprite, ducks.pos);
    return (ducks);
}

t_sprite dino(void)
{
    t_sprite dino;
    dino.rect = rect(0, 5, 85, 94);
    dino.texture = sfTexture_createFromFile("dino_sprite.png",
    NULL);
    dino.sprite = sfSprite_create();
    sfSprite_setTexture(dino.sprite, dino.texture, false);
    dino.scale = pos(1.85, 1.85);
    sfSprite_setScale(dino.sprite, dino.scale);
    dino.pos = pos(10, 825);
    sfSprite_setPosition(dino.sprite, dino.pos);
    return (dino);
}

t_sprite sol1(void)
{
    t_sprite paralaxsol1;
    paralaxsol1.pos = pos(0, 0);
    paralaxsol1.rect = rect(0, 0, 1920, 1080);
    paralaxsol1.sprite = sfSprite_create();
    paralaxsol1.texture = sfTexture_createFromFile("sol_runner.png",
                                                   NULL);
    sfSprite_setTexture(paralaxsol1.sprite, paralaxsol1.texture, sfTrue);
    paralaxsol1.scale = pos(5, 5);
    sfSprite_setScale(paralaxsol1.sprite, paralaxsol1.scale);
    paralaxsol1.pos = pos(-15, 920);
    sfSprite_setPosition(paralaxsol1.sprite, paralaxsol1.pos);
    return (paralaxsol1);
}

t_sprite sol2(void)
{
    t_sprite paralaxsol2;
    paralaxsol2.pos = pos(0, 0);
    paralaxsol2.rect = rect(0, 0, 1920, 1080);
    paralaxsol2.sprite = sfSprite_create();
    paralaxsol2.texture = sfTexture_createFromFile("sol_runner.png",
                                                   NULL);
    sfSprite_setTexture(paralaxsol2.sprite, paralaxsol2.texture, sfTrue);
    paralaxsol2.scale = pos(5, 5);
    sfSprite_setScale(paralaxsol2.sprite, paralaxsol2.scale);
    paralaxsol2.pos = pos(1915, 920);
    sfSprite_setPosition(paralaxsol2.sprite, paralaxsol2.pos);
    return (paralaxsol2);
}

t_sprite window_size(void)
{
    t_sprite windows;
    sfVideoMode mode = {1920, 1080, 32};
    windows.window = sfRenderWindow_create(mode, "My_Runner",
    sfDefaultStyle, NULL);
    sfRenderWindow_setMouseCursorVisible(windows.window, false);
    sfRenderWindow_setFramerateLimit(windows.window, 60);
    return (windows);
}

Initialisation *windows(void) {
    Initialisation *init = malloc(sizeof(Initialisation));
    init->music.music = 0;
    init->windows = window_size();
    init->time.clock = sfClock_create();
    init->paralaxsol1 = sol1();
    init->paralaxsol2 = sol2();
    init->ducks = duck1rev();
    init->dino = dino();
    return (init);
}