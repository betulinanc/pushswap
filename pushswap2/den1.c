#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
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

int main(int argc, char **argv)
{
    if(argc>=2)
    {
        int i=1;
        while (i<=argc-1)
        {
            printf("%s      ",argv[i]);
           //argv_check(argv[i]); 
           i++;
        }
    }
    return 0;
}