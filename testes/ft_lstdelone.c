#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_front(t_list **lst, t_list *new);
void	*ft_del(void *content);
void	ft_lstdelone(t_list *lst, void (*del)(void *));

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
	add0->content = (void *)1;
	add0->next = NULL;
	ft_lstadd_front(&list, add0);
	add1->content = (void *)2;
	add1->next = NULL;
	ft_lstadd_front(&list, add1);
	add2->content = (void *)3;
	add2->next = NULL;
	ft_lstadd_front(&list, add2);
	printf("Before delete:\n");
	printf("Expected: 3 2 1\nResult  : ");
	temp = list;
	while (temp != NULL)
	{
		printf("%d ", temp->content);
		temp = temp->next;
	}
	ft_lstdelone(add1, ft_del(add1->content));
	printf("After delete:\n");
	printf("Expected: 3 1\nResult  : ");
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = new;
	temp->next = *lst;
	*lst = temp;
}

void	*ft_del(void *content)
{
	free(content);
	return (NULL);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	temp = lst;
	lst = lst->next;
	del(temp->content);
	free(temp);
}
