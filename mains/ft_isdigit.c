int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("Result: %d Espected: 1\n", ft_isdigit('0'));
	printf("Result: %d Espected: 0\n", ft_isdigit('0' - 1));
	printf("Result: %d Espected: 1\n", ft_isdigit('9'));
	printf("Result: %d Espected: 0\n", ft_isdigit('9' + 1));
}
