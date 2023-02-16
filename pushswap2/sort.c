# include "push_swap.h"

void sort_list(t_list *a, t_list *b, int size)
{ 
    int s2;
    int rank;

    s2 = size;
    if(s2/2 < 2)
    {
        sort_tree(a, s2);
    }
    else
    {
        if(a->index > a->next->index)
            sa(a);
        if(already_sorted(a))
            return;
        if(size % 2 == 1)
            s2 = size / 2 + 2;
        else
            s2 = size / 2 + 1;
        while(ft_lstsize(a) > 2)
        {
            //printf("%d\n",ft_lstsize(b));
            if(a->index < s2)
            {
                pb(&b, &a);
                //printf("%d\n",ft_lstsize(b));
            }
            else
            {
                rank = find_min_index_rank(a, s2);
                printf("%d %d\n",rank, ft_lstsize(a));
                if(rank == ft_lstsize(a))
                {
                    if(already_sorted(a))
                        break;
                    rra(a);
                    pb(&b,&a);
                }
                else
                {
                    if(already_sorted(a))
                    {
                        break;
                    }
                    ra(a);
                }
            }
        }
        //sort_list(a,b,s2);
    }
}