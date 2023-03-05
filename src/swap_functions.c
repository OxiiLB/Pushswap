/*
** EPITECH PROJECT, 2022
** sa_sb
** File description:
** swap the first two elements of a given linked list
*/

#include <stdlib.h>
#include "linked_list.h"
#include "header.h"
#include "my.h"
#include "struct_la_lb.h"

static s_ell_t *swap_more_than_two_ell(s_ell_t *e1, s_ell_t *e2, s_ell_t *l_a)
{
    s_ell_t *e3 = l_a->next->next;
    l_a = e2;
    e1->next = e3;
    e1->previous = e2;
    e2->next = e1;
    e2->previous = NULL;
    e3->previous = e1;
    return l_a;
}

s_ell_t *swap_first_elements(s_ell_t *l_a, int nb_ell)
{
    if (l_a == NULL)
        return l_a;
    s_ell_t *e1 = l_a;
    s_ell_t *e2 = l_a->next;
    if (nb_ell > 2)
        l_a = swap_more_than_two_ell(e1, e2, l_a);
    if (nb_ell == 2) {
        l_a = e2;
        e1->next = NULL;
        e1->previous = e2;
        e2->next = e1;
        e2->previous = NULL;
    }
    return l_a;
}

void swap_first_elements_both(s_lists_t *lists, int nb_ell)
{
    lists->l_a = swap_first_elements(lists->l_a , nb_ell);
    lists->l_b = swap_first_elements(lists->l_b , nb_ell);
}
