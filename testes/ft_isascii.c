#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("Result: %d Espected: 1\n", ft_isascii('a'));
	printf("Result: %d Espected: 1\n", ft_isascii(0));
	printf("Result: %d Espected: 0\n", ft_isascii('a' + 100));
	printf("Result: %d Espected: 1\n", ft_isascii(127));
	printf("Result: %d Espected: 0\n", ft_isascii(128));
	printf("Result: %d Espected: 0\n", ft_isascii(-1));
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
