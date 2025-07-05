#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	src[8] = {1,2,3,4,5,6,7,8};
	int	src1[8] = {1,2,3,4,5,6,7,8};
	size_t	n;
	char	srcs[9] = "aabbccdd";
	char	srcs1[9] = "aabbccdd";
	//char	dests[9];
	//char	dests1[9];

	n = 2;
	printf("%s\n", (char *)memmove(srcs + 2, srcs, n));
	printf("%s\n", (char *)ft_memmove(srcs1 + 2, srcs1, n));

	n = 2;
        memmove(src + 2, src, n * sizeof(int));
        ft_memmove(src1 + 2, &src1, n * sizeof(int));
	int i = 0;
	while (i < 8)
	{
		printf("%i", src[i]);
		i ++;
	}
	printf("\n");
	i = 0;
	while (i < 8)
	{
		printf("%i", src1[i]);
		i ++;
	}
        return (0);
}
