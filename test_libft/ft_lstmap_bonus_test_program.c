#include <stdio.h>
#include "../../libft/libft.h"



void	*f(void *content)
{
	char	*str = (char *)content;
	char	*new_str = malloc(ft_strlen(str) + 1);
	int		i;

	if (!new_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i] + 1;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

void	del(void *content)
{
	free(content);
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
	
	printf("After calling ft_lstmap:\n");
        t_list *new_lst = ft_lstmap(*lst, &f, &del);
        
        printf("node has addres %p\n", node);
        t_list *temp = new_lst;
        while (temp != NULL)
        {
        	printf("new_node has content %s\n", (char *)temp->content);
        	temp = temp->next;
	}
        //1) Compile with -g flag 2) valgrind --leak-check=full ./a.out
        //paste this inside function after del(current->content): printf("current has content %s\n", (char *)current->content);
        free (node);
        free (new1);
        free (new2);
        free (new3);
        ft_lstclear(&new_lst, &del);
}
