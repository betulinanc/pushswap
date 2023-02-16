#include "push_swap.h"

int find_min(t_list *a)
{
    int min=2147483647;
    while(a)
    {
        if(a->data <= min && a->index == 0)
        {
            min = a->data;
        }
        a = a->next;
    }
    return min;
}

void sort_min_list(t_list *a,int size)
{
    t_list *inter;
    int min;

    int i=1;
    min = find_min(a);
    inter = a;
    while(i<=size)
    {
        if(inter->data == min)
        {
            inter->index = i;
            min = find_min(a);
            i++;
        }
        inter = inter->next;
        if(!inter)
            inter = a;
    }
}
