# include "push_swap.h"

void    rra(t_list *a)
{
    int *a1;
    int *a1t;
    t_list *inter;
    int i=0;
    int j;

    inter = a;
    j=ft_lstsize(a);
    a1 = (int *)malloc(j+1*sizeof(int));
    a1t = (int *)malloc(j+1*sizeof(int));
    while (i<j-1)
    {
        a1[i]= inter->data;
        a1t[i]= inter->index;
        inter = inter->next;
        i++;
    }
    a->data = inter->data;
    a->index = inter->index;
    i = 0;
    while (i<j-1)
    {
       a->next->data = a1[i];
       a->next->index = a1t[i];
       a = a->next;
       i++;
    }
    free(a1);
    free(a1t);
    write(1, "rra\n", 4);
}

void    rrb(t_list *b)
{
    int *a1;
    int *a1t;
    t_list *inter;
    int i=0;
    int j;

    inter = b;
    j=ft_lstsize(b);
    a1 = (int *)malloc(j+1*sizeof(int));
    a1t = (int *)malloc(j+1*sizeof(int));
    while (i<j-1)
    {
        a1[i]= inter->data;
        a1t[i]= inter->index;
        inter = inter->next;
        i++;
    }
    b->data = inter->data;
    b->index = inter->index;
    i = 0;
    while (i<j-1)
    {
       b->next->data = a1[i];
       b->next->index = a1t[i];
       b = b->next;
       i++;
    }
    free(a1);
    free(a1t);
    //free(inter);
    write(1, "rrb\n", 4);
}

void    rrr(t_list *a, t_list *b)
{
    rra(a);
    rrb(b);
    write(1, "rrr\n", 4);
}