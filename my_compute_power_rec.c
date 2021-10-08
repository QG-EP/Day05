/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_compute_power_rec
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int res = 0;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    res = nb * (my_compute_power_rec(nb, p - 1));
    return (res);
}