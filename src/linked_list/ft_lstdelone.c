#include "ft_linked_list.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		del(lst->content);
		free (lst);
	}
}
