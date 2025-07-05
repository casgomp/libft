#include <stdio.h>
#include "../../libft/libft_bonus.h"

void	del(void *content) //in the case where content was a string.
{
	char	*s;
	
	s = content;
}

int	main(void)
{
	t_list	**lst;
	t_list	*head;
	t_list	*node;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;

	node = ft_lstnew("hello");
	new1 = ft_lstnew("friend");
	new2 = ft_lstnew("of");
	new3 = ft_lstnew("mine");
	head = NULL;
	lst = &head;

	ft_lstadd_back(lst, node);
	ft_lstadd_back(lst, new1);
	ft_lstadd_back(lst, new2);
	ft_lstadd_back(lst, new3);
	
	free(new1);
	free(new2);
	free(new3);
	
	
	printf("node has addres %p\n", node);
	
	
	printf("After calling ft_lstdelone:\n");
        ft_lstdelone(*lst, &del);
         
        printf("node has addres %p\n", node);
}
