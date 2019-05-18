/*
** EPITECH PROJECT, 2018
** swap
** File description:
** swap
*/

#include "include/pushswap.h"

void swp_fst_two_elem(list_t *list, char *ope)
{
    elem_t *elem;
    elem_t *first_elem;
    elem_t *next_elem;

    if (!list->first->next)
        return;
    first_elem = list->first;
    elem = list->first->next;
    next_elem = elem->next;
    list->first = elem;
    elem->next = first_elem;
    first_elem->next = next_elem;
    my_putstr(ope);
}

void swp_fst_two_elem_st(list_t *list_a, list_t *list_b, char *ope)
{
    swp_fst_two_elem(list_a, "");
    swp_fst_two_elem(list_b, "");
    my_putstr(ope);
}