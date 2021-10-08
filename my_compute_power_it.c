/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_compute_power_it
*/

#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    int res = 1;
    int product = nb * p;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    for (int i = 0; i < p; i++) {
        res = res * nb;
    }
    return (res);
}