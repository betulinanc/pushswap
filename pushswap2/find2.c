#include "push_swap.h"

int find_min_index(t_list *a, int size)
{
    int min_index;

    min_index = size;
    while(a)
    {
        if(a->index <= min_index)
        {
            min_index = a->index;
        }
        a = a->next;
    }
    return min_index;
}

int find_max_index(t_list *a)
{
    int max_index;
    max_index = 1;
    while(a)
    {
        if(a->index >= max_index)
        {
            max_index = a->index;
        }
        a = a->next;
    }
    return max_index;
}
int find_min_index_rank(t_list *a, int size)
{
    int min_index;
    int i;

    i = 0;
    min_index = size;
    while(a)
    {
        if(a->index == min_index)
        {
            min_index = a->index;
            return i;
        }
        a = a->next;
        i++;
    }
    return i;
}