/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** isupper
*/

int my_str_isupper(char const *str)
{
    int n = 0;

    while (str[n])
    {
        if (str[n] >= 'a' && str[n] <= 'z')
            return (0);
        else
            n++;
    }
    return (1);
}
