/*
** EPITECH PROJECT, 2018
** operations_lists
** File description:
** operations_lists
*/

#include "include/pushswap.h"

void change_la(all_t *all, int average, int *first)
{
    elem_t *elem = all->l_a.first;

    while (elem->next) {
        if (*first == 0)
            write(1, " ", 1);
        else
            *first = 0;
        if (elem->nb >= average && !test_all_nb_sup_av(&all->l_a, average)) {
            rotate_elem_bl(&all->l_a, "ra");
            elem = all->l_a.first;
        } else if (elem->nb > elem->next->nb) {
            swp_fst_two_elem(&all->l_a, "sa");
            move_ftp_to(&all->l_a, &all->l_b, " pb");
            elem = all->l_a.first;
        } else {
            move_ftp_to(&all->l_a, &all->l_b, "pb");
            elem = all->l_a.first;
        }
    }
}

void change_lb(all_t *all)
{
    elem_t *elem = all->l_b.first;

    while (elem->next) {
        write(1, " ", 1);
        if (elem->nb < elem->next->nb) {
            swp_fst_two_elem(&all->l_b, "sb");
            move_ftp_to(&all->l_b, &all->l_a, " pa");
            elem = all->l_b.first;
        } else {
            move_ftp_to(&all->l_b, &all->l_a, "pa");
            elem = all->l_b.first;
        }
    }
    write(1, " ", 1);
    move_ftp_to(&all->l_b, &all->l_a, "pa");
}