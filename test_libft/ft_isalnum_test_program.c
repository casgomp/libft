#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c;
	
	c = 'Z';
	printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));
	return (0);
}
