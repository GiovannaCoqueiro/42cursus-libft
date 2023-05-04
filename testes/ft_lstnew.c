#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);

int	main(void)
{
	void	*value;
	t_list	*first_list;
	int		*content;
	int		x;
	t_list	*second_list;
	char	*content2;
	char	x2;

	value = (void *)3;
	first_list = ft_lstnew(&value);
	content = first_list->content;
	x = *content;
	printf("Content: %d\n", x);
	printf("Next: %p\n", first_list->next);

	value = (void *)'c';
	second_list = ft_lstnew(&value);
	content2 = second_list->content;
	x2 = *content2;
	printf("Content: %c\n", x2);
	printf("Next: %p\n", first_list->next);
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
