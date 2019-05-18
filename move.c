/*
** EPITECH PROJECT, 2018
** move
** File description:
** move
*/

#include "include/pushswap.h"

void move_ftp_to(list_t *list_from, list_t *list_to, char *ope)
{
    add_elem(list_to, list_from->first->nb);
    list_from->first = list_from->first->next;
    list_from->nb -= 1;
    my_putstr(ope);
}