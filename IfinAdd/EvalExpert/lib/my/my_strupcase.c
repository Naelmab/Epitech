/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** strupcase
*/

char *my_strupcase(char *str)
{
    int n = 0;
    while (str[n])
    {
        if (str[n] >= 97 && str[n] < 123)
            str[n] -= 32;
        n++;
    }
    return (str);
}
