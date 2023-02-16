# include "push_swap.h"

void    sa(t_list *a)
{
    int tmp;
    int tmp_index;
    int j;

    j=ft_lstsize(a);
    if(j>1)
    {
    tmp = a->data;
    tmp_index = a->index;
    a->data = a->next->data;
    a->index = a->next->index;
    a->next->data = tmp;
    a->next->index = tmp_index;
    write(1,"sa\n",3);
    }
}

void    sb(t_list *b)
{
    int tmp;
    int tmp_index;
    int j;

    j=ft_lstsize(b);
    if(j>1)
    {
    tmp = b->data;
    tmp_index = b->index;
    b->data = b->next->data;
    b->index = b->next->index;
    b->next->data = tmp;
    b->next->index = tmp_index;
    write(1,"sb\n",3);
    }
}

void    ss(t_list *a, t_list *b)
{
    sa(a);
    sb(b);
    write(1,"ss\n",3);
}

void    pa(t_list **a, t_list **b)
{
    if (b == NULL || *b == NULL)
        return;
    t_list	*iter;

	iter = *b;
	*b = (*b)->next;
	iter->next = *a;
	*a = iter;
    free(iter);
    write(1,"pa\n",3);
}