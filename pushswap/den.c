#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct      s_list
{
    int             data;
    struct s_list   *next;
    int index;
}                   t_list;
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
void error_messages()
{
    write(1,"ERROR\n",6);
    exit(0);
}
// void same_digit_check(t_list *a, int size)
// {
//     int list[size];
//     int b;
//     int c;

//     b = 0;
//     c = 0;
//     //list = malloc(size * sizeof(int));
//     while(a)
//     {
//         list[c] = a->data;
//         a = a->next;
//         c++;
//     }
//     while(size>b)
//     {
//         while (size>c)
//         {
//             c = b + 1;
//             if(list[b]==list[c])
//                 error_messages();
//             c++;
//         }
//         b++;
//     }
//     //free(list);
// } 

int     main(void)
{
    t_list *a;
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node8 = malloc(sizeof(t_list));
    t_list *node9 = malloc(sizeof(t_list));
    t_list *node10 = malloc(sizeof(t_list));

    node1->data = 2;
    node2->data = 1;
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
    /*t_list *node4 = malloc(sizeof(t_list));
    t_list *node5 = malloc(sizeof(t_list));
    t_list *node6 = malloc(sizeof(t_list));

    node4->data = 4;
    node5->data = 5;
    node6->data = 6;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;
    b = node4;*/
    b = NULL;

    //pb(&b,&a);
    //pb(&b,&a);
    //pb(&b,&a);
    /*t_list *c;
	*a = (*a)->next;
	iter->next = *b;
	*b = iter;
    c = a;
    a = a->next;*/
    same_digit_check(a,ft_lstsize(a));
    while(a)
    {
        printf("%d ",a->data);
        a= a->next;
    }
    printf("\n");

    return (0);
}
/*t_list *arg_list(char *argv[])
{
    t_list *a;
    char **newlist;
    int i;
    int j;

    i = 1;
    a = NULL;
    while(argv[i])
    {
        j = 0;
        newlist=ft_split(argv[i], 32);
        while(newlist[j])
        {
            ft_lstadd_back(&a,ft_lstnew(ft_atoi(newlist[j]),0));
            j++;
        }
        j = 0;
        free_newlist(newlist, i);
        i++;
    }
    same_digit_check(a);
    return (a);
}*/