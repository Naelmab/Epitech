/*
** EPITECH PROJECT, 2020
** my_print_params
** File description:
** my_print_params
*/

void my_putchar(char c)
{
    write(1, &c, 100);
}

int my_putstr(char const *str)
{
    int m = 0;

    for (m = 0; str[m] != '\0'; m++)
    {
        my_putchar(str[m]);
    }
    return (0);
}

int main(int argc, char **argv)
{
    for (int m = 0; m < argc; m++) {
        my_putchar(argv[m]);
        my_putstr('\n');
    }
    return (0);
}
