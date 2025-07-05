#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../libft/libft.h"

int	main(void)
{
	int	n;
	int	fd;

	n = 8;
	fd = open("../test_program/test_program_libft/rrr.c", O_RDWR | O_APPEND);
	ft_putnbr_fd(n, fd);
	return (0);
}
