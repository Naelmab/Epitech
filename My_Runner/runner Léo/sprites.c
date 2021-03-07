/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** sprites
*/

#include "my.h"

Figure data_drake(void)
{
    Figure dragon;
    dragon.position.x = 0;
    dragon.position.y = 50;
    dragon.tx_rect.left = 0;
    dragon.tx_rect.top = 130;
    dragon.tx_rect.width = 160;
    dragon.tx_rect.height = 130;
    dragon.speed = 1;
    dragon.sprite = sfSprite_create();
    dragon.texture =
    sfTexture_createFromFile("ressources/flying-dragon.png", NULL);
    sfSprite_setTexture(dragon.sprite, dragon.texture, sfTrue);
    dragon.scale.x = 1;
    dragon.scale.y = 1;
    sfSprite_setScale(dragon.sprite, dragon.scale);
    return (dragon);
}

Figure data_heart(void)
{
    Figure heart;
    heart.position.x = 1700;
    heart.position.y = 20;
    heart.tx_rect.left = 0;
    heart.tx_rect.top = 0;
    heart.tx_rect.width = 200;
    heart.tx_rect.height = 40;
    heart.speed = 0;
    heart.sprite = sfSprite_create();
    heart.texture =
    sfTexture_createFromFile("ressources/heart_sheet.png", NULL);
    sfSprite_setTexture(heart.sprite, heart.texture, sfTrue);
    heart.scale.x = 1;
    heart.scale.y = 1;
    sfSprite_setScale(heart.sprite, heart.scale);
    return (heart);
}

Figure data_scope(void)
{
    Figure scope;
    scope.position.x = 100;
    scope.position.y = 200;
    scope.tx_rect.left = 0;
    scope.tx_rect.top = 0;
    scope.tx_rect.width = 200;
    scope.tx_rect.height = 40;
    scope.speed = 0;
    scope.sprite = sfSprite_create();
    scope.texture =
    sfTexture_createFromFile("ressources/scope.png", NULL);
    sfSprite_setTexture(scope.sprite, scope.texture, sfTrue);
    scope.scale.x = 0.5;
    scope.scale.y = 0.5;
    sfSprite_setScale(scope.sprite, scope.scale);
    return (scope);
}

Music data_music(void)
{
    Music music;
    music.is_dead = 0;
    music.music_jeu = sfMusic_createFromFile("ressources/music_zelda.wav");
    music.sound_pitie = sfSound_create();
    music.buff_pitie = sfSoundBuffer_createFromFile("ressources/pitie.wav");
    sfSound_setBuffer(music.sound_pitie, music.buff_pitie);
    music.music_pouf = sfMusic_createFromFile("ressources/poufiatasse.wav");
    return (music);
}

Background data_background(void)
{
    Background background;
    background.position.x = 0;
    background.position.y = 0;
    background.tx_rect.left = 0;
    background.tx_rect.top = 0;
    background.tx_rect.width = 1920;
    background.tx_rect.height = 1080;
    background.sprite = sfSprite_create();
    background.texture =
    sfTexture_createFromFile("ressources/background.jpg", &background.tx_rect);
    sfSprite_setTexture(background.sprite, background.texture, sfTrue);
    return (background);
}