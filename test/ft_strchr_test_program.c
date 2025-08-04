#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	const char	*s;
	int	c;

	s = "confundido";
	c = 'f' + 256;
	printf("%s\n", strchr(s, c));
	printf("%s\n", ft_strchr(s, c));
	return (0);
}
