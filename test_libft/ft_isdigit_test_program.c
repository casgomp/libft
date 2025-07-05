#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c;
	
	c = 'z';
	printf("%i\n", isdigit(c));
	printf("%i\n", ft_isdigit(c));
	return (0);
}
