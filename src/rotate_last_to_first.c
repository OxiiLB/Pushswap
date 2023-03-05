/*
** EPITECH PROJECT, 2022
** rotate_last_first
** File description:
** put the last character in the beginning of a linked list
*/

#include <stdlib.h>
#include "my.h"
#include "header.h"
#include "linked_list.h"
#include "struct_la_lb.h"

s_ell_t *rotate_last_to_first(s_ell_t *list, int nb_ell)
{
    if (list == NULL)
        return list;
    s_ell_t *node = list;
    s_ell_t *e1 = list;

    if (nb_ell > 2) {
        while (node->next != NULL)
            node = node->next;
        list = node;
        e1->previous = node;
        node->next = e1;
        node->previous->next = NULL;
        node->previous = NULL;
    }
    if (nb_ell == 2)
        list = swap_first_elements(list, nb_ell);
    return list;
}

void rotate_last_to_first_both(s_lists_t *lists, int nb_ell)
{
    lists->l_a = rotate_last_to_first(lists->l_a, nb_ell);
    lists->l_b = rotate_last_to_first(lists->l_b, nb_ell);
}
