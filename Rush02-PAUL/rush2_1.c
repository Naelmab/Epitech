/*
** EPITECH PROJECT, 2020
** rush2.c
** File description:
** rush2step1
*/
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else
    {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}

int my_strlen(char const *str)
{
    int variable = 0;
    int i = 0;
    
    for (i = 0 ; str[i] != '\0' ; i++){
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] >= 'Z') {
			variable++;
		}
	}
    return(variable);
}

int my_float(int A, int B)
{
	int  n;
	int m;

	n = A * 10000 / B;
	m = A * 100 / B;
	my_put_nbr(m);
	m = m * 100;
	n = n - m;
	my_putchar('.');
	my_put_nbr(n);
}

/*void percent(char **argv, int count)
{
    int variable = 0;
    //int *count = 0;

    while (argv[1][variable] != '\0')
    {
        variable = variable + 1;
    }
    int A = (count * 100) / variable;
    int B = A % 100;
    my_putchar('(');
    my_put_nbr(A);
    my_put_nbr(',');
    my_put_nbr(B);
    my_putchar('%');
    my_putchar(')');
}*/

int language(char *str, char c)
{
    int i = 0;
    int count = 0;
    int check = c;

    if (c >= 'a' && c <= 'z')
        check = c - 32;
    else if (c >= 'A' && c <= 'Z')
        check = c + 32;
    while (str[i] != '\0') {
        if (str[i] == c || str[i] == check)
            count = count + 1;
        i++;
    }
    return (count);
}

int main(int argc, char **argv)
{
    int p = 2;
	int A = 0;
	int B = my_strlen(argv[1]);
	
    while (p < argc)
    {
        my_putchar(argv[p][0]);
        my_putchar(':');
        my_put_nbr(language(argv[1], argv[p][0]));
        my_putchar(' ');
        my_putchar('(');
        my_float(A, B);
		my_putchar('%');
		my_putchar(')');
        my_putchar('\n');
        p++;
    }
}
