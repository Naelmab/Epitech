/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** prime nb
*/

int my_is_prime(int);

int my_find_prime_sup(int nb)
{
    int end = 0;
    if (my_is_prime(nb) == 1)
        return (nb);
    while (end == 0)
    {
        if (my_is_prime(nb) == 1)
        {
            return (nb);
        }
        nb + 1;
    }
}
