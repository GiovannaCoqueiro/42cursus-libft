#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstclear(t_list **lst, void (*del)(void*));

int	main(void)
{

}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = *lst;
		*lst = temp->next;
		del(temp->content);
		free(temp);
	}
}
