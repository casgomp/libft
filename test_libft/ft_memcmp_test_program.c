#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s1[5] = "hello";
	char	s2[5] = "hella";
	int	nb1;
	int	nb2;
	size_t	n;

	n = 5;
	printf("%i\n", memcmp(s1, s2, n));
	printf("%i\n", ft_memcmp(s1, s2, n));

	nb1 = 2147;
	nb2 = 2199;	
	n = 1;
	printf("%i\n", memcmp(&nb1, &nb2, n));
        printf("%i\n", ft_memcmp(&nb1, &nb2, n));
}
