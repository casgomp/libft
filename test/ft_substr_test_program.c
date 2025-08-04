#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	const char	*s;
	unsigned int	start;
	size_t	len;

	s = "rotulador";
	start = 2;
	len = 5;
	printf("printf is %s\n", ft_substr(s, start, len));
	write(1, ft_substr(s, start, len), len + 5);
	write(1, "\n", 1);
	return (0);
}
