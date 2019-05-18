/*
** EPITECH PROJECT, 2018
** rotate
** File description:
** rotate
*/

#include "include/pushswap.h"

void rotate_elem_bl(list_t *list, char *ope)
{
    elem_t *elem;
    elem_t *first_elem;
    elem_t *last_elem;

    first_elem = list->first;
    elem = list->first;
    while (elem) {
        last_elem = elem;
        elem = elem->next;
    }
    last_elem->next = first_elem;
    list->first = list->first->next;
    first_elem->next = NULL;
    my_putstr(ope);
}

void rotate_elem_bl_st(list_t *list_a, list_t *list_b, char *ope)
{
    rotate_elem_bl(list_a, "");
    rotate_elem_bl(list_b, "");
    my_putstr(ope);
}

void rotate_elem_bf(list_t *list, char *ope)
{
    elem_t *elem;
    elem_t *first_elem;
    elem_t *prev_last_elem;
    elem_t *last_elem;

    if (!list->first->next)
        return;
    first_elem = list->first;
    elem = list->first;
    while (elem) {
        if (elem->next)
            prev_last_elem = elem;
        last_elem = elem;
        elem = elem->next;
    }
    list->first = last_elem;
    last_elem->next = first_elem;
    prev_last_elem->next = NULL;
    my_putstr(ope);
}

void rotate_elem_bf_st(list_t *list_a, list_t *list_b, char *ope)
{
    rotate_elem_bf(list_a, "");
    rotate_elem_bf(list_b, "");
    my_putstr(ope);
}