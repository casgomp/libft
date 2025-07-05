#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	size_t	size;
	char	dst[9] = "very";
	const char src[5] = "good";
	char	dst1[9] = "very";
	const char src1[5] = "good";

	size = 2;
	printf("strlcat returns %zu\n", strlcat(dst, src, size));
	printf("ft_strlcat returns %zu\n", ft_strlcat(dst1, src1, size));
}
