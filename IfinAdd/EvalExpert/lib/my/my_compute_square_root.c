/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** "put a root"
*/

int my_compute_square_root(int nb)
{
    int n = 0;
    if (nb <= 0) return (0);

    while (n * n != nb) {
        n = n + 1;
        if (n > nb) {
            return  (0);
        }
    }
    return (n);
}
