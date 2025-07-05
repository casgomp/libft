#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c;
	
	c = 97;
	printf("%i\n", isprint(c));
	printf("%i\n", ft_isprint(c));
	return (0);
}
