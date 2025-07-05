#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	char const	*s1;
	char const	*set;
	char	*ptr;

	
	s1 = "saltamontes";
	set = "lates";
	ptr = ft_strtrim(s1, set);
	printf("sizeof  s1 is %lu\n", sizeof(ptr));
	printf("sizeof  *s1 is %lu\n", sizeof(*ptr));
	printf("strlen  s1 is %lu\n", strlen(ptr));
	write(1, ptr, ft_strlen(ptr) + 1);
	write(1, "\n", 1);
	printf("%s\n", ptr);
	return (0);
}
