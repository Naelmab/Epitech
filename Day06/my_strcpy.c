/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** "strcopy"
*/

char *my_strcpy(char *dest, char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        dest[i] = str[i];
        i++;
    }
    return (dest);
}
