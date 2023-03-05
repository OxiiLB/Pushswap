/*
** EPITECH PROJECT, 2022
** errors
** File description:
** check all errors
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "header.h"

static int check_num(char **av, int i, int j)
{
    if ((av[i][0] < '0' || av[i][0] > '9') && av[i][0] != '-') {
        return 84;
    }
    if ((av[i][j] < '0' || av[i][j] > '9') && j != 0) {
        return 84;
    }
    return 0;
}

int errors(int ac, char **av)
{
    int return_nb = 0;
    if (ac == 1) {
        write(2, "Error: There is no parameter.\n", 31);
        return 84;
    }
    for (int i = 1; av[i] != NULL; i += 1) {
        for (int j = 0; av[i][j] != '\0' && return_nb != 84; j += 1) {
            return_nb = check_num(av, i, j);
        }
        if (return_nb == 84) {
            write(2, "Error: A parameter is false.\n", 30);
            return return_nb;
        }
    }
    return return_nb;
}
