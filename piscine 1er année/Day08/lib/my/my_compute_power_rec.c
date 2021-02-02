/*
** EPITECH PROJECT, 2020
**  my_compute_power_rec.c
** File description:
** "power recusive"
*/

int my_compute_power_rec(int nb , int p )
{
    int a = 1;
    int i = nb;
    if (p < 0) return (0);
    if (p == 0) return (1);
    if (a < p)
        nb = nb *(my_compute_power_rec(nb, p - 1));
    return (nb);
}
