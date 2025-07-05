#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

int	main(void)
{
	char	*s;
	int	fd;

	s = "amazing";
	fd = open("../test_program/test_program_libft/rrr.c", O_RDWR | O_APPEND);
	ft_putstr_fd(s, fd);
	close (fd);
	return (0);
}
