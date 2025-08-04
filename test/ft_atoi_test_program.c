#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*nptr;

	nptr = "--2147483649";
	printf("%i\n", atoi(nptr));
	printf("%i\n", ft_atoi(nptr));
	return (0);
}
