/*
** EPITECH PROJECT, 2020
** my_compute_power_it.c
** File description:
** "put a power"
*/


int my_compute_power_it (int nb , int p )
{
    int a = 1;
    int i = nb;
    if (p < 0) return (0);
    if (p == 0) return (1);
    while (a < p) {
        nb = nb * i;
        a = a + 1;
    }
    return (nb);
}
