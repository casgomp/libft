#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	size_t	nmemb;
	size_t	size;
	char	*arr;

	nmemb = 3;
	size = 5;
	arr = (char *)calloc(nmemb, size);
	size_t i = 0;
	while (i < (nmemb * size))
	{
		printf("%i", arr[i]);
		i ++;
	}
	printf("\n");
	printf("calloc returns:%s\n", (char *)calloc(nmemb, size));
	printf("size of calloc:%lu\n", sizeof(calloc(nmemb, size)));
	printf("ft_calloc returns:%s\n", (char *)ft_calloc(nmemb, size));
	printf("size of ft_calloc:%lu\n", sizeof(ft_calloc(nmemb, size)));
}
