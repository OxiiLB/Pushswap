/*
** EPITECH PROJECT, 2022
** free
** File description:
** free all
*/

#include <stdlib.h>
#include "my.h"
#include "header.h"
#include "linked_list.h"
#include "struct_la_lb.h"

void free_all(s_lists_t *lists)
{
    s_ell_t *tmp;
    while (lists->l_a != NULL) {
        tmp = lists->l_a;
        lists->l_a = lists->l_a->next;
        free(tmp);
    }
    while (lists->l_b != NULL) {
        tmp = lists->l_b;
        lists->l_b = lists->l_b->next;
        free(tmp);
    }
}
