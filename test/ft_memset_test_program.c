#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s[6] = "hello";
	int	nbr = -2127483647;
	int	c = 90;
	size_t	n = 2;

	printf("%s\n", (char *)memset(s,c,n));
	printf("%i\n", *(int *)memset(&nbr,c,n));
	ft_memset(s, c, n);
	printf("%s\n", s);
	printf("%i\n", *(int *)ft_memset(&nbr, c, n));
	return (0);
}
