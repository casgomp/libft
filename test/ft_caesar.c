#include <stdlib.h>
#include "libft.h"

char	ft_caesar(unsigned int n, char s)
{
	char	c;

	c = s + n;
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_caesar(3, 'a'));
	return (0);
}
//*/
