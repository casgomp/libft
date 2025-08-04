#include <stdio.h>
#include "../../libft/libft_bonus.h"

int	main(void)
{
	t_list	**lst;
	t_list	*head;
	t_list	*new;
	t_list	*node;
	char	*content1;
	char	*content2;

	content1 = "hello";
	node = ft_lstnew(content1);
	content2 = "friend";
	new = ft_lstnew(content2);
	head = NULL;
	lst = &head;

	printf("node address is %p\n", node);
	printf("new address is %p\n\n", new);

	printf("head points to  %p\n", head);
	printf("node content is %s ", (char *)node->content);
	printf("at address %p\n", (char *)node->content);
	printf("node next points to %s ", (char *)node->next);
	printf("at address %p\n", (char *)node->next);
	printf("new content is %s ", (char *)new->content);
        printf("at address %p\n", (char *)new->content);
        printf("new next points to %s ", (char *)new->next);
        printf("at address %p\n", (char *)new->next);

	ft_lstadd_front(lst, node);

	printf("\n\n");

	printf("head points to  %p\n", head);
	printf("node content is %s ", (char *)node->content);
        printf("at address %p\n", (char *)node->content);
        printf("node next points to %p ", (char *)node->next);
        printf("at address %p\n", (char *)node->next);
	printf("new content is %s ", (char *)new->content);
        printf("at address %p\n", (char *)new->content);
        printf("new next points to %p ", (char *)new->next);
        printf("at address %p\n", (char *)new->next);

	ft_lstadd_front(lst, new);

        printf("\n\n");

        printf("head points to  %p\n", head);
        printf("node content is %s ", (char *)node->content);
        printf("at address %p\n", (char *)node->content);
        printf("node next points to %p ", (char *)node->next);
        printf("at address %p\n", (char *)node->next);
        printf("new content is %s ", (char *)new->content);
        printf("at address %p\n", (char *)new->content);
        printf("new next points to %p ", (char *)new->next);
        printf("at address %p\n", (char *)new->next);

}
