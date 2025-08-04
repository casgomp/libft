#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c;

	c = 'A';
	printf("%c\n", tolower(c));
	printf("%c\n", ft_tolower(c));
	return (0);
}
