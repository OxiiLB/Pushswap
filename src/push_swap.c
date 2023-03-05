/*
** EPITECH PROJECT, 2022
** push_swap
** File description:
** loop that sort the linked list
*/

#include <stdlib.h>
#include "my.h"
#include "header.h"
#include "linked_list.h"
#include "struct_la_lb.h"
#include <unistd.h>
#include <stdbool.h>

static void get_min(s_lists_t *lists)
{
    int min = lists->l_a->nb;
    int emplacement = 0;
    int count = 0;
    s_ell_t *node = lists->l_a;
    while (node != NULL) {
        if (node->nb <= min) {
            min = node->nb;
            emplacement = count;
        }
        count += 1;
        node = node->next;
    }
    for (int i = 0; i <= emplacement - 1; i += 1) {
        lists->l_a = rotate_first_to_last(lists->l_a,
        count_elements(lists->l_a));
        write(1, "ra ", 3);
    }
    passing_first_element_la_to_lb(lists);
    write(1, "pb ", 3);
}

static bool check_sorted(s_ell_t *list)
{
    s_ell_t *node = list;

    while (node->next != NULL) {
        if (node->nb > node->next->nb)
            return false;
        node = node->next;
    }
    return true;
}

void push_swap(s_lists_t *lists)
{
    if (check_sorted(lists->l_a) == true) {
        write(1, "\n", 1);
        return;
    }
    get_min(lists);
    while (lists->l_a != NULL)
        get_min(lists);
    while (lists->l_b != NULL ) {
        if (lists->l_b->next != NULL) {
            passing_first_element_lb_to_la(lists);
            write(1, "pa ", 3);
        } else {
            passing_first_element_lb_to_la(lists);
            write(1, "pa\n", 3);
        }
    }
}
