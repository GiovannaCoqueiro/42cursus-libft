int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("Result: %d Espected: 1\n", ft_isprint('~'));
	printf("Result: %d Espected: 0\n", ft_isprint('~' + 1));
	printf("Result: %d Espected: 1\n", ft_isprint(' '));
	printf("Result: %d Espected: 0\n", ft_isprint(' ' - 1));
}
