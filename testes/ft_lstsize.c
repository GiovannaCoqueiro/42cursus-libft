#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	void	*value;
	int		*content;
	int		x;

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
	printf("List size: %d    Expected: 3\n", ft_lstsize(first));
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

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	if (lst == NULL)
		return (0);
	count = 0;
	temp = lst;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
