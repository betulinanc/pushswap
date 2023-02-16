# include "push_swap.h"

t_list *arg_list(char *argv[])
{
	t_list	*a;
	char	**lst;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	while (argv[i] != 0)
	{
		j = 0;
		lst = ft_split(argv[i], 32);
		while (lst[j])
		{	
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(lst[j]), 0));
			j++;
		}
		j = 0;
		free_newlist(lst, j);
		i++;
	}
	same_digit_check(a);
	return (a);
}

int already_sorted(t_list *a)
{
    t_list *checkList;

    checkList = a;
    while (a)
    {
        checkList = a->next;
        while (checkList)
        {
            if(a->data > checkList->data)
                return 0;
            checkList = checkList->next;
        }
        a = a->next;
    }
    return (1);
}