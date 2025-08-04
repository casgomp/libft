#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*s;
	int	c;

	s = "nix\0tamalizacion";
	c = '\0';
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
