/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** strlowcase
*/

char *my_strlowcase(char *str)
{
    int n = 0;
    while (str[n])
    {
        if (str[n] >= 'A' && str[n] <= 'Z')
            str[n] += 32;
        n++;
    }
    return (str);
}
