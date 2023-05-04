#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	void	*value;
	int		*content;
	int		x;
	t_list	*temp;

	first = NULL;
	second = NULL;
	third = NULL;

	value = (void *)1;
	first = ft_lstnew(&value);
	content = first->content;
	x = *content;
	printf("Content 1: %d\n", x);

	value = (void *)2;
	second = ft_lstnew(&value);
	content = second->content;
	x = *content;
	printf("Content 2: %d\n", x);

	value = (void *)3;
	third = ft_lstnew(&value);
	content = third->content;
	x = *content;
	printf("Content 3: %d\n", x);

	first->next = second;
	second->next = third;
	temp = ft_lstlast(first);
	content = temp->content;
	x = *content;
	printf("List size: %d    Expected: 3\n", x);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
