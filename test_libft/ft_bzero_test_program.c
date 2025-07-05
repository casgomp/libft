#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s[5] = "hello";
	int	nbr = 2147483647;
	char	s1[5] = "hello";
	int	nbr1 = 2147483647;
	size_t	n = 2;

	bzero(s1, n);
	int i = 0;
	while (i < 5)
	{
		printf("%c\n", s1[i]);
		i ++;
	}
	bzero(&nbr, n);
	printf("%i\n", nbr);
	ft_bzero(s, n);
	i = 0;
        while (i < 5)
        {
                printf("%c\n", s[i]);
                i ++;
        }
	ft_bzero(&nbr1, n);
	printf("%i\n", nbr1);
}
