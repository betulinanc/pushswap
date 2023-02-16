#include "push_swap.h"

void argv_check(char *a)
{
    int i=0;
    while(a[i])
    {
        if(!((ft_isdigit(a[i])) || (a[i] == ' ') || (a[i] == '+' || a[i] == '-')))
            error_messages();
        if((a[i] == '+' || a[i] == '-') && !(ft_isdigit(a[i])))
            error_messages();
        if(a[0] == 0 && ft_isdigit(a[1]))
            error_messages();
        if(a[i] >= '0' && a[i] <= '9')
            if(!((ft_isdigit(a[i])) || (a[i+1] == ' ')))
                error_messages();
        if((a[i] == ' ' || a[i] == '\t') && (a[i+1] == '0') && (ft_isdigit(a[i+2])))
            error_messages();
        i++;
    }
}

int same_digit_check(t_list *a)
{
    int size;
    int *list;
    int b;
    int c;

    b = 0;
    c = 0;
    size = ft_lstsize(a);
    list = malloc(size * sizeof(int));
    while(a != NULL)
    {
        list[c] = a->data;
        a = a->next;
        c++;
    }
    while(size > b)
    {
        c = b + 1;
        while (size>c)
        {
            if(list[b]==list[c])
                error_messages();
            c++;
        }
        b++;
    }
    free(list);
    return 1;
}