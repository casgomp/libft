#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../libft/libft.h"

int	main(void)
{
	char	*s;
	int	fd;

	s = "string 2 followed by a newline";
	fd = open("../test_program/test_program_libft/rrr.c", O_RDWR | O_APPEND);
	ft_putendl_fd(s, fd);
	close (fd);
	return (0);
}
