#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	char const	*s1;
	char const	*s2;

	s1 = "meaning";
	s2 = "full";
	printf("%s\n", ft_strjoin(s1, s2));
	write(1, ft_strjoin(s1, s2), ft_strlen(s1) + ft_strlen(s2) + 1);
	write(1, "\n", 1);
	return (0);
}
