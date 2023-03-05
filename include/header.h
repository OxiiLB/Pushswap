/*
** EPITECH PROJECT, 2022
** header
** File description:
** header
*/

#include "linked_list.h"
#include "struct_la_lb.h"

#ifndef HEADER
    #define HEADER

    s_ell_t *create_linked_list(int nb);
    s_ell_t *swap_first_elements(s_ell_t *l_a, int ac);
    void swap_first_elements_both(s_lists_t *lists, int nb_ell);
    s_ell_t *add_element_end(s_ell_t *lists, int nb);
    int str_to_int(char *str);
    void print_linked_list(s_ell_t *list);
    int errors(int ac, char **av);
    void free_all(s_lists_t *lists);
    void passing_first_element_la_to_lb(s_lists_t *list);
    void passing_first_element_lb_to_la(s_lists_t *lists);
    s_ell_t *rotate_first_to_last(s_ell_t *list, int nb_ell);
    void rotate_first_to_last_both(s_lists_t *lists, int nb_ell);
    s_ell_t *rotate_last_to_first(s_ell_t *list, int nb_ell);
    void rotate_last_to_first_both(s_lists_t *lists, int nb_ell);
    int count_elements(s_ell_t *list);
    void push_swap(s_lists_t *lists);

#endif /* !HEADER */
