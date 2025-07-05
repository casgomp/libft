#include <stdio.h>
#include "../../libft/libft_bonus.h"

void	del(void *content) //in the case where content was a string.
{
	int	i;
	
	i = 0;
	while (((char *)content)[i])
	{
		((char *)content)[i] = '\0';
		i ++;
	}
}

int	main(void)
{
	t_list	**lst;
	t_list	*head;
	t_list	*node;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;
	char	str1[] = "hello";
	char	str2[] = "friend";
	char	str3[] = "of";
	char	str4[] = "mine";
	
	node = ft_lstnew(str1);
	new1 = ft_lstnew(str2);
	new2 = ft_lstnew(str3);
	new3 = ft_lstnew(str4);
	head = NULL;
	lst = &head;

	ft_lstadd_back(lst, node);
	ft_lstadd_back(lst, new1);
	ft_lstadd_back(lst, new2);
	ft_lstadd_back(lst, new3);
	
	printf("node has addres %p\n", node);
	printf("node has content %s\n", (char *)node->content);
	printf("new1 has content %s\n", (char *)new1->content);
	printf("new2 has content %s\n", (char *)new2->content);
	printf("new3 has content %s\n", (char *)new3->content);
	
	
	printf("After calling ft_lstdelone:\n");
        ft_lstclear(lst, &del);
        
        if (*lst == NULL)
        {
        	printf("pointer to the list was set to NULL\n");
        }
         
        printf("node has addres %p\n", node);
        //1) Compile with -g flag 2) valgrind --leak-check=full ./a.out
        //paste this inside function after del(current->content): printf("current has content %s\n", (char *)current->content);

}
