/*
** EPITECH PROJECT, 2022
** add_ell
** File description:
** add an element in a linked list
*/

#include "linked_list.h"
#include <stdlib.h>

int count_elements(s_ell_t *list)
{
    s_ell_t *node = list;
    int count = 0;
    while (node != NULL) {
        count += 1;
        node = node->next;
    }
    return count;
}

s_ell_t *create_linked_list(int nb)
{
    s_ell_t *list = malloc(sizeof(s_ell_t));
    if (list == NULL)
        return NULL;
    list->nb = nb;
    list->next = NULL;
    list->previous = NULL;
    return list;
}

s_ell_t *add_element_end(s_ell_t *lists, int nb)
{
    s_ell_t *node = lists;
    s_ell_t *new_elt = create_linked_list(nb);

    while (node->next != NULL)
        node = node->next;
    node->next = new_elt;
    new_elt->next = NULL;
    new_elt->previous = node;
    return node;
}
