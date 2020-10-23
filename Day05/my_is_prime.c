/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** "prime number"
*/

int my_is_prime(int nb)
{
    int n = 3;
    
    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    if (nb % 2 == 0)
        return (0);
    while (n < nb)
    {
        if (nb % n == 0)
        {
            return (0);
        }
        n = n + 1;
    }
    return (1);
}
