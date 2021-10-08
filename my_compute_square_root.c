/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_compute_square_root
*/

#include <stdio.h>

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0 || nb == 0)
        return (0);
    for (; i * i != nb; i++) {
        if (i > nb)
            return (0);
    }
    return (i);
}