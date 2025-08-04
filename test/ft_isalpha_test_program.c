#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c = 'a';
	
	printf("%i\n", isalpha(c));
	printf("%i\n", ft_isalpha(c));
	return (0);
}
