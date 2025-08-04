#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

int	main(void)
{
	char	c;
	int	fd;

	c = 'y'; 
	fd = open("../test_program/test_program_libft/rrr.c", O_RDWR | O_APPEND);
	ft_putchar_fd(c, fd);
	close (fd);
	return (0);
}
