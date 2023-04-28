#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("Result: %d Espected: 1\n", ft_isalnum('A'));
	printf("Result: %d Espected: 0\n", ft_isalnum('A' - 1));
	printf("Result: %d Espected: 1\n", ft_isalnum('a'));
	printf("Result: %d Espected: 0\n", ft_isalnum('a' - 1));
	printf("Result: %d Espected: 1\n", ft_isalnum('Z'));
	printf("Result: %d Espected: 0\n", ft_isalnum('Z' + 1));
	printf("Result: %d Espected: 1\n", ft_isalnum('z'));
	printf("Result: %d Espected: 0\n", ft_isalnum('z' + 1));
	printf("Result: %d Espected: 1\n", ft_isalnum('0'));
	printf("Result: %d Espected: 0\n", ft_isalnum('0' - 1));
	printf("Result: %d Espected: 1\n", ft_isalnum('9'));
	printf("Result: %d Espected: 0\n", ft_isalnum('9' + 1));
}
