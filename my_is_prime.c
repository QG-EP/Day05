/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb <= 3 && nb > 1)
        return (1);
    if (nb <= 1)
        return (0);
    for (int a = 2; a * a <= nb; a++) {
        if (nb % a == 0)
            return (0);
        return (1);
    }
    return (0);
}