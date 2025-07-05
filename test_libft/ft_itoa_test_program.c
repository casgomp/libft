#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	int n[4] = {12345, 0, -12345, -2147483648};
	int i = 0;
	while (i < 4)
	{
		printf("%s\n", ft_itoa(n[i]));
		write(1, ft_itoa(n[i]), ft_strlen(ft_itoa(n[i])) - 1);
		write(1, "\n", 1);
		write(1, ft_itoa(n[i]), ft_strlen(ft_itoa(n[i])));
		write(1, "\n", 1);
		write(1, ft_itoa(n[i]), ft_strlen(ft_itoa(n[i])) + 1);
		write(1, "\n", 1);
		printf("%s\n", ft_itoa(n[i]));
		i ++;
	}
	return (0);
}
