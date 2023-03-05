/*
** EPITECH PROJECT, 2022
** passing functions
** File description:
** functions that can take a nbr and put it in another linked list
*/

#include <stdlib.h>
#include "linked_list.h"
#include "header.h"
#include "my.h"
#include "struct_la_lb.h"

void passing_first_element_lb_to_la(s_lists_t *lists)
{
    if (lists->l_b == NULL)
        return;
    s_ell_t *e1 = lists->l_b;
    if (lists->l_b->next != NULL) {
        s_ell_t *e2 = lists->l_b->next;
        lists->l_b = e2;
        e2->previous = NULL;
    } else {
        lists->l_b = NULL;
    }
    if (lists->l_a != NULL) {
        s_ell_t *e3 = lists->l_a;
        lists->l_a = e1;
        e1->next = e3;
        e3->previous = e1;
    } else {
        lists->l_a = e1;
        lists->l_a->next = NULL;
        lists->l_a->previous = NULL;
    }
}

void passing_first_element_la_to_lb(s_lists_t *lists)
{
    if (lists->l_a == NULL)
        return;
    s_ell_t *e1 = lists->l_a;
    if (lists->l_a->next != NULL) {
        s_ell_t *e2 = lists->l_a->next;
        lists->l_a = e2;
        e2->previous = NULL;
    } else {
        lists->l_a = NULL;
    }
    if (lists->l_b != NULL) {
        s_ell_t *e3 = lists->l_b;
        lists->l_b = e1;
        e1->next = e3;
        e3->previous = e1;
    } else {
        lists->l_b = e1;
        lists->l_b->next = NULL;
        lists->l_b->previous = NULL;
    }
}
