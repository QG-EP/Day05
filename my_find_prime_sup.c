/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_find_prime_sup
*/

#include <stdio.h>

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (;my_is_prime(nb) == 0; nb++);
    return (nb);
}