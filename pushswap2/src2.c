# include "push_swap.h"

void    ra(t_list *a)
{
    int tmp;
    int tmp_index;
    int i=0;
    int j;

    j=ft_lstsize(a);
    tmp = a->data;
    tmp_index = a->index;
    while (i<j-1)
    {
       a->data = a->next->data;
       a->index = a->next->index;
       a = a->next;
       i++;
    }
    a->data = tmp;
    a->index = tmp_index;
    a->next = NULL;
    write(1, "ra\n", 3);
}

void    rb(t_list *b)
{
    int tmp;
    int tmp_index;
    int i=0;
    int j;

    j=ft_lstsize(b);
    tmp = b->data;
    tmp_index = b->index;
    while (i<j-1)
    {
       b->data = b->next->data;
       b->index = b->next->index;
       b = b->next;
       i++;
    }
    b->data = tmp;
    b->index = tmp_index;
    b->next = NULL;
    write(1, "ra\n", 3);
}

void    rr(t_list *a, t_list *b)
{
    ra(a);
    rb(b);
    write(1,"rr\n",3);
}

void    pb(t_list **b, t_list **a)
{
    if (a == NULL || *a == NULL)
        return;
    t_list	*iter;

	iter = *a;
	*a = (*a)->next;
	iter->next = *b;
	*b = iter;
    free(iter);
    write(1,"pb\n",3);
}