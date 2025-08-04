#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[1] = "";
	const char src[12] = "0guantanamo";
	size_t	size;

	size = 20;
	printf("%zu\n", strlcpy(dst, src, size));
	printf("%zu\n", ft_strlcpy(dst, src, size));
}
