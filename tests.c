/*
** EPITECH PROJECT, 2018
** tests
** File description:
** tests
*/

#include "include/pushswap.h"

int test_all_nb_sup_av(list_t *list, int average)
{
    elem_t *elem = list->first;

    while (elem) {
        if (elem->nb < average)
            return (0);
        elem = elem->next;
    }
    return (1);
}

int test_order_valid(all_t *all)
{
    elem_t *elem = all->l_a.first;

    if (all->l_b.first != NULL)
        return (0);
    while (elem->next) {
        if (elem->nb > elem->next->nb)
            return (0);
        elem = elem->next;
    }
    return (1);
}