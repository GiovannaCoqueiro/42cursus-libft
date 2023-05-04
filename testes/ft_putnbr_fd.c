#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(214748364, fd);
		write(fd, "8", 1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		a = (n % 10 + '0');
		write(fd, &a, 1);
	}
	else if (n >= 0 && n <= 9)
	{
		a = (n + '0');
		write(fd, &a, 1);
	}
	else
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
}
