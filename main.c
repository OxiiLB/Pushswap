/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"
#include "header.h"
#include "linked_list.h"
#include "struct_la_lb.h"

s_lists_t init_list(int ac, char **av)
{
    s_lists_t lists;
    int nbr = str_to_int(av[1]);
    lists.l_a = create_linked_list(nbr);
    lists.l_b = NULL;
    if (lists.l_a == NULL)
        return lists;
    for (int i = 2; i != ac; i += 1) {
        nbr = str_to_int(av[i]);
        add_element_end(lists.l_a, nbr);
    }
    return lists;
}

int main(int argc, char **argv)
{
    if (errors(argc, argv) == 84)
        return 84;
    s_lists_t lists = init_list(argc, argv);
    if (lists.l_a == NULL)
        return 84;
    push_swap(&lists);
    free_all(&lists);
    return 0;
}
