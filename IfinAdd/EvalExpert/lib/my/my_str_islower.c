/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** islower
*/

int my_str_islower(char const *str)
{
    int n = 0;

    while (str[n])
    {
        if (str[n] >= 'A' && str[n] <= 'Z')
            return (0);
        else
            n++;
    }
    return (1);
}
