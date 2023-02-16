#include "push_swap.h"

int main(int argc, char *argv[])
{
    if (argc >= 2)
    {
        t_list  *a;
        t_list *b;
        int size;
        int i;
        
        i = 1;
        while (i <= argc-1)
        {
            argv_check(argv[i]); 
            i++;
        }
        a = arg_list(argv);
        b= NULL;
        if(already_sorted(a))
            return 0;
        i = 0;
        size = ft_lstsize(a);
        sort_min_list(a,size);
        /*while(i<size)
        {
            printf("%d  ",a->index);
            a = a->next;
            i++;
        }*/
        sort_list(a,b,size);
        
    }
        return 0;
}