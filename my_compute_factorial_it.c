/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_compute_factorial_it
*/

#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int a = 1;
    
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    if (nb > 12)
        return (0);
    while (nb > 0) {
        a = a * nb;
        nb--;
        printf("%d\n", a);
    }
    return (a);
}