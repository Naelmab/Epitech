/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** 
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int z = 0;
    
    while (z != n) {
        dest[z] = src[z];
        z++;
    }
    return (dest);
}
