#include <stdio.h>
#include "../../libft/libft.h"

int	main(void)
{
	char	*content;
	char	*content1;
	char	*content2;
	char	*content3;
	char	*content4;
	t_list	*node;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;
	t_list	*new4;
	t_list	**lst;
	t_list	*head;	

	content = "hello";
	node = ft_lstnew(content);
	content1 = "friend";
	new1 = ft_lstnew(content1);
	content2 = "goodbye";
	new2 = ft_lstnew(content2);
	content3 = "for";
	new3 = ft_lstnew(content3);
	content4 = "now";
	new4 = ft_lstnew(content4);
	head = NULL;
	lst = &head;
	

	printf("content node %s\n", (char *)node->content);
	printf("content new1 %s\n", (char *)new1->content);
	printf("content new2 %s\n", (char *)new2->content);
	printf("content new3 %s\n", (char *)new3->content);
	printf("content new4 %s\n", (char *)new4->content);
	
	ft_lstadd_back(lst, node);
	
	t_list *curr = *lst;
	int i = 0;
	while (curr->next != NULL)
	{
		printf("first addback address of [%i] is %p\n", i, curr);
		printf("first addback content of [%i] is %s\n", i, (char *)curr->content);
		printf("first addback next of [%i] is %p\n", i, curr->next);
		curr = curr->next;
		i ++;
	}
	
        ft_lstadd_back(lst, new1);
	curr = *lst;
	i = 0;
	while (curr->next != NULL)
	{
		printf("first addback address of [%i] is %p\n", i, curr);
		printf("first addback content of [%i] is %s\n", i, (char *)curr->content);
		printf("first addback next of [%i] is %p\n", i, curr->next);
		curr = curr->next;
		i ++;
	}

	ft_lstadd_back(lst, new2);
	curr = *lst;
	i = 0;
        while (curr->next != NULL)
	{
		printf("second addback address of [%i] is %p\n", i, curr);
		printf("second addback content of [%i] is %s\n", i, (char *)curr->content);
		printf("second addback next of [%i] is %p\n", i, curr->next);
		curr = curr->next;
		i ++;
	}
	
	ft_lstadd_back(lst, new3);
	curr = *lst;
	i = 0;
        while (curr->next != NULL)
	{
		printf("third addback address of [%i] is %p\n", i, curr);
		printf("third addback content of [%i] is %s\n", i, (char *)curr->content);
		printf("third addback next of [%i] is %p\n", i, curr->next);
		curr = curr->next;
		i ++;
	}
	
	ft_lstadd_back(lst, new4);
	curr = *lst;
	i = 0;
        while (curr != NULL)
	{
		printf("fourth addback address of [%i] is %p\n", i, curr);
		printf("fourth addback content of [%i] is %s\n", i, (char *)curr->content);
		printf("fourth addback next of [%i] is %p\n", i, curr->next);
		curr = curr->next;
		i ++;
	}
	
}
