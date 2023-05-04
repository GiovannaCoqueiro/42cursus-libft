#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int				content; //changed from (void *) to (int) to make it easy to test
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);

int	main(void)
{
	t_list	*list;
	t_list	*add0;
	t_list	*add1;
	t_list	*add2;
	t_list	*temp;

	list = NULL;
	add0 = malloc(sizeof(t_list));
	add1 = malloc(sizeof(t_list));
	add2 = malloc(sizeof(t_list));
	if (add0 == NULL || add1 == NULL || add2 == NULL)
		return (1);
	add0->content = 1;
	add0->next = NULL;
	ft_lstadd_back(&list, add0);
	add1->content = 2;
	add1->next = NULL;
	ft_lstadd_back(&list, add1);
	add2->content = 3;
	add2->next = NULL;
	ft_lstadd_back(&list, add2);
	printf("Expected: 1 2 3\nResult  : ");
	temp = list;
	while (temp != NULL)
	{
		printf("%d ", temp->content);
		temp = temp->next;
	}
	temp = list;
	while (temp != NULL)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
