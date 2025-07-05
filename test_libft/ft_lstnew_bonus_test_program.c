#include <stdio.h>
#include "../../libft/libft_bonus.h"

int	main(void)
{
	char	*content;
	t_list	*node;

	content = "hello";
	node = ft_lstnew(content);
	printf("%s\n", (char *)node->content);
	printf("%s\n", (char *)node->next);
	return (0);
}
