/*
** EPITECH PROJECT, 2022
** struct
** File description:
** struct
*/

#ifndef S_ELL
    #define S_ELL

    typedef struct s_ell {
        int nb;
        struct s_ell *next;
        struct s_ell *previous;
    }s_ell_t;

#endif /* !S_ELL */
