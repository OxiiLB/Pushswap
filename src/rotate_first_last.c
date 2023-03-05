/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-pushswap-romain.giraud
** File description:
** rotate_first_to_last_functions
*/

#include <stdlib.h>
#include "my.h"
#include "header.h"
#include "linked_list.h"
#include "struct_la_lb.h"

s_ell_t *rotate_first_to_last(s_ell_t *list, int nb_ell)
{
    if (list == NULL)
        return list;
    s_ell_t *node = list;
    s_ell_t *e1 = list;
    s_ell_t *e2 = list->next;

    if (nb_ell > 2) {
        while (node->next != NULL)
            node = node->next;
        list = e2;
        e1->next = NULL;
        e1->previous = node;
        e2->previous = NULL;
        node->next = e1;
    }
    if (nb_ell == 2)
        list = swap_first_elements(list, nb_ell);
    return list;
}

void rotate_first_to_last_both(s_lists_t *lists, int nb_ell)
{
    lists->l_a = rotate_first_to_last(lists->l_a, nb_ell);
    lists->l_b = rotate_first_to_last(lists->l_b, nb_ell);
}
