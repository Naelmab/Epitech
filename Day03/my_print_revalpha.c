/*
** EPITECH PROJECT, 2020
** revalpha
** File description:
** revalpha
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char  print = 122;

    while(print > 96){
        my_putchar(print);
        print--;}
    return (0);
}

