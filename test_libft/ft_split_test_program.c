#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	**arr;
	char const	*s;
	char	c;
	unsigned int	i;

	s = "hello how are you";
	c = ' ';
	arr = ft_split(s, c);
	if (!arr)
	{
		return (1);
	}
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i ++;
	}
	return 0;
}
