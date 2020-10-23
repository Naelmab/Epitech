/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** getnber
*/

int getnbr(char const *str )
{
    int i = 0;
    char c;
    int check = c;

    while (str[i] != '\0') {
        if (str[i] == c || str[i] == check)
            if (c >= '0' && c <= '9') {
                //my_putnbr(c);
                printf("%d", c);
                i++;
            }else {
                i++;
            }
        //return (nb);
    }
}
