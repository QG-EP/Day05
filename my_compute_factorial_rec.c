/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_compute_factorial_rec
*/

#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
    int res = 0;
    
    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12)
        return (0);
    res = nb * my_compute_factorial_rec(nb - 1);
    return (res);
}