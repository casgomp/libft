#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[5] = "caldo";
	int	nbr;
	int	c; 
	int	c1;
	size_t	n;

	nbr = 2147483647;
	c = 'l';
	n = 4;
	printf("%s\n", (char *)memchr(str, c, n));
	printf("%s\n", (char *)ft_memchr(str, c, n));
	c1 = 127;
	printf("%p\n", memchr(&nbr, c1, n));
	printf("%p\n", ft_memchr(&nbr, c1, n));
}
