# include "push_swap.h"

void free_newlist(char **newlist, int i)
{
    while(newlist[i])
    {
        free(newlist[i]);
        i++;
    }
    free(newlist);
}

