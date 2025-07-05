#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "maraca";
	s2 = "maracba";
	n = 6;
	printf("%i\n", strncmp(s1, s2, n));
	printf("%i\n", ft_strncmp(s1, s2, n));
	return (0);
}
