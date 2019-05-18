/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** pushswap
*/

#include "include/pushswap.h"

long long calc_average(all_t *all)
{
    elem_t *elem;
    long long average = 0;

    elem = all->l_a.first;
    while (elem) {
        average += elem->nb;
        elem = elem->next;
    }
    average = average / all->nb_len;
}

void operate(all_t *all)
{
    long long average = calc_average(all);
    int order = 0;
    int first = 1;

    while (!test_order_valid(all)) {
        if (!order) {
            change_la(all, average, &first);
            order++;
        } else {
            change_lb(all);
            order--;
        }
    }
}

int main(int ac, char **av)
{
    all_t *all = malloc(sizeof(all_t));

    if (ac < 2)
        return (84);
    all->nb_len = ac - 1;
    fill_struct(&all->l_a, all->nb_len, av);
    init_list(&all->l_b);
    operate(all);
    my_putstr("\n");
    return (0);
}
