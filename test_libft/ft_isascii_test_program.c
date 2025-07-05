#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c;
	
	c = '\n';
	printf("%i\n", isascii(c));
	printf("%i\n", ft_isascii(c));
	return (0);
}
