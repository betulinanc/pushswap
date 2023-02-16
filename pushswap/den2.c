#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
void    pb(t_list **b, t_list **a)
{
    if (a == NULL || *a == NULL)
        return;
    t_list	*iter;

	iter = *a;
	*a = (*a)->next;
	iter->next = *b;
	*b = iter;
    free(iter);
    //write(1,"pb\n",3);
}
int     main(void)
{
    t_list *a;
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node8 = malloc(sizeof(t_list));
    t_list *node9 = malloc(sizeof(t_list));
    t_list *node10 = malloc(sizeof(t_list));

    node1->data = 9;
    node2->data = 0;
    node3->data = 3;
    node8->data = 6;
    node9->data = 3;
    node10->data = 8;
    node1->next = node2;
    node2->next = node3;
    node3->next = node8;
    node8->next = node9;
    node9->next = node10;
    node10->next = NULL;
    a = node1;

    t_list *b;
    b = NULL;
    pb(&b,&a);
    printf("%d",ft_lstsize(b));
    while(b)
    {
        printf("%d ",b->data);
        b= b->next;
    }
    printf("\n");
    return (0);
}
