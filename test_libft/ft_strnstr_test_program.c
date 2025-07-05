#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*big;
	const char	*little;
	size_t	len;

	big = "helloworld";
	little = "world";
	len = 8;
	printf("%s\n", strnstr(big, little, len));
	printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}
