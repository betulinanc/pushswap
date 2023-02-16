#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include "libft/libft.h"

void    sa(t_list *a);
void    sb(t_list *b);
void    ss(t_list *a, t_list *b);

void    ra(t_list *a);
void    rb(t_list *b);
void    rr(t_list *a, t_list *b);

void    rra(t_list *a);
void    rrb(t_list *b);
void    rrr(t_list *a, t_list *b);

void    pa(t_list **a, t_list **b);
void    pb(t_list **b, t_list **a);

int find_min(t_list *a);
void sort_min_list(t_list *a,int size);
int find_min_index(t_list *a, int size);
void argv_check(char *a);
int same_digit_check(t_list *a);
void free_newlist(char **newlist, int i);
t_list *arg_list(char *arg[]);
int already_sorted(t_list *a);
void sort_tree(t_list *a, int size2);
int find_max_index(t_list *a);
void sort_list(t_list *a, t_list *b, int size);
int find_min_index_rank(t_list *a, int size);

#endif