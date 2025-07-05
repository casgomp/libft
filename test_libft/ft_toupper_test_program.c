#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c;

	c = 'b';
	printf("%c\n", toupper(c));
	printf("%c\n", ft_toupper(c));
	return (0);
}
