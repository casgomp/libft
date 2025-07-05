#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*s;

	s = "very good";
	printf("%s\n", strdup(s));
	printf("%s\n", ft_strdup(s));
	write(1, ft_strdup(s), ft_strlen(s) + 1);
	write(1, "\n", 1);
	return (0);
}
