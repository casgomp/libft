#include <stdio.h>
#include "../../libft/libft_bonus.h"

int	main(void)
{
	t_list	*node;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;
	t_list	*head;
	t_list	**lst;

	node = ft_lstnew("hello");
	new1 = ft_lstnew("friend");
	new2 = ft_lstnew("of");
	new3 = ft_lstnew("mine");
	head = NULL;
	lst = &head;

	ft_lstadd_front(lst, node);
	ft_lstadd_front(lst, new1);
	ft_lstadd_front(lst, new2);
	ft_lstadd_front(lst, new3);
	
	printf("size of list = %i\n", ft_lstsize(*lst));
	return (0);
}
