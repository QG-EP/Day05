/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int tmp = 0;

    if (nb <= 1)
        return 0;
    for (int i = 2; i < nb; i++) {
        tmp = nb / i;
        if (i * tmp == nb)
            return 0;
    }  
    return (1);
}