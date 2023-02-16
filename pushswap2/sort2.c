#include "push_swap.h"

void sort_tree(t_list *a, int size2)
{
    int max_index;
    int min_index;

    max_index = find_max_index(a);
    min_index = find_min_index(a, size2);
    if(a->index == max_index)
    {
        ra(a);
        if(a->index > a->next->index)
            sa(a);
    }
    else if(a->index == min_index)
    {
        if(!(a->next->index < a->next->next->index))
        {
            rra(a);
            sa(a);
        }
    }
    else
    {
        if(a->next->index < a->index)
            sa(a);
        else
        {
            ra(a);
            ra(a);
        }
    }
}