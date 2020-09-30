/*
** EPITECH PROJECT, 2020
** my_print_alpha
** File description:
** alphabet
*/


int my_putchar(char c)
{
    write(1, &c, 1);
}
    
int main(void)
{
    char  print = 97;

    while(print < 123){
    my_putchar(print);
    print++;}
    return (0);
}
