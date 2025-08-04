#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char const	*s;

	s = "pagoda";
	printf("%s\n", ft_strmapi(s, ft_caesar));
	return (0);
}
