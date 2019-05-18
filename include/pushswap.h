/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

#include "my.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct elem_s
{
    int nb;
    struct elem_s *next;
} elem_t;

typedef struct list_s
{
    int nb;
    struct elem_s *first;
} list_t;

typedef struct all_s
{
    int nb_len;
    list_t l_a;
    list_t l_b;
} all_t;

void operate(all_t *);
long long calc_average(all_t *);

void init_list(list_t *);
void add_elem(list_t *, int);
void fill_struct(list_t *, int, char **);
void print_list(list_t *);

void change_la_next(all_t *);
void change_la(all_t *, int , int *);
void change_lb(all_t *);

int test_all_nb_sup_av(list_t *, int);
int test_order_valid(all_t *);
void test_change_la_next(all_t *, int, int *);

void move_ftp_to(list_t *, list_t *, char *);

void rotate_elem_bl(list_t *, char *);
void rotate_elem_bl_st(list_t *, list_t *, char *);
void rotate_elem_bf(list_t *, char *);
void rotate_elem_bf_st(list_t *, list_t *, char *);

void swp_fst_two_elem(list_t *, char *);
void swp_fst_two_elem_st(list_t *, list_t *, char *);

#endif /* !PUSHSWAP_H_ */
