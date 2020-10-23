/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** word
*/

int my_putstr(char const *str)
{
	while (*str != '\0')
    {
        my_putstr(*str);
        *str + 1;
    }
    return (1);
}
