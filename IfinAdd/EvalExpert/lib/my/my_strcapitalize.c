/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** strcapitalize
*/

char *my_strlowcase(char *str)
{
    int n = 0;
    while (str[n])
    {
        if (str[n] > 66 && str[n] < 91)
            str[n] += 32;
        n++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int n = 0;
    int m = 0;

    my_strlowcase(str);
    if (str[n] >= 'a' && str[n] <= 'z')
        str[n] -= 32;
    while (str[n] != '\0')
    {
        if ((str[n] < 'A' && str[n] > 'Z') && (str[n] < 'a' && str[n] > 'z') &&
            (str[n] < '0' && str[n] > '9')) {
            m = n;
            if (str[m + 1] >= 'a' && str[m + 1] <= 'z')
                str[m + 1] -= 32;
        }
        n++;
    }
    return (str);
}
