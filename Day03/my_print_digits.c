/*
** EPITECH PROJECT, 2020
** number
** File description:
** number order
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char  print = 48;

    while(print < 58){
        my_putchar(print);
        print++;}
    return (0);
}
