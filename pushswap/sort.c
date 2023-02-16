# include "push_swap.h"

void sort_list(t_list *a, t_list *b, int size)
{ 
    int s2;
    int rank;

    b = NULL;
    s2 = size;
    if(size/2 < 2)
    {
        sort_tree(a, s2);
    }
    else
    {
        if(a->index > a->next->index)
            sa(a);
        already_sorted(a);
        if(size % 2 == 1)
            s2 = size / 2 + 1;
        else
            s2 = size / 2;
        //while(ft_lstsize(b) < s2)
        while(ft_lstsize(a) < size - s2)
        {
            if(a->data <= s2)
            {
                printf("%d ",ft_lstsize(b));
                pb(&b, &a);
                printf("%d ",ft_lstsize(b));
                printf("%d",b->data);
                b = b->next;
            }
            else
            {
                rank = find_min_index_rank(a, s2);
                printf("%d\n",rank);
                printf("A%d\n",ft_lstsize(a));
                if(rank == ft_lstsize(a))
                    rra(a);
                else
                    ra(a);
            }
        }
        //sort_list(a,b,s2);
    }
}