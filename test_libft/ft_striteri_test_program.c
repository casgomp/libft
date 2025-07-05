#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s[4] = "col";
	ft_striteri(s, ft_caesar2);
	printf("%s\n", s);
	return (0);
}
