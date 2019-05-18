/*
** EPITECH PROJECT, 2018
** struct
** File description:
** struct
*/

#include "include/pushswap.h"

void init_list(list_t *list)
{
    list->nb = 0;
    list->first = NULL;
}

void add_elem(list_t *list, int nb)
{
    elem_t *elem = malloc(sizeof(*elem));

    elem->nb = nb;
    elem->next = list->first;
    list->nb += 1;
    list->first = elem;
}

void fill_struct(list_t *list, int ac, char **av)
{
    init_list(list);
    for (int i = ac; i > 0; i--)
        add_elem(list, my_getnbr(av[i]));
}

void print_list(list_t *list)
{
    elem_t *elem;

    elem = list->first;
    while (elem) {
        my_putnbr(elem->nb);
        if (elem->next)
            my_putstr(", ");
        elem = elem->next;
    }
}