/*
** EPITECH PROJECT, 2022
** print linked list
** File description:
** print the int inside a linked list
*/

#include <stdlib.h>
#include "linked_list.h"
#include "header.h"
#include "my.h"

void print_linked_list(s_ell_t *list)
{
    if (list == NULL)
        return;
    while (list != NULL) {
        if (list->next == NULL){
            my_printf("%d\n", list->nb);
        } else {
            my_printf("%d\t", list->nb);
        }
        list = list->next;
    }
}
