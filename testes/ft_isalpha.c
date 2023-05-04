#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	printf("Result: %d Espected: 1\n", ft_isalpha('A'));
	printf("Result: %d Espected: 0\n", ft_isalpha('A' - 1));
	printf("Result: %d Espected: 1\n", ft_isalpha('a'));
	printf("Result: %d Espected: 0\n", ft_isalpha('a' - 1));
	printf("Result: %d Espected: 1\n", ft_isalpha('z'));
	printf("Result: %d Espected: 0\n", ft_isalpha('z' + 1));
	printf("Result: %d Espected: 1\n", ft_isalpha('Z'));
	printf("Result: %d Espected: 0\n", ft_isalpha('Z' + 1));
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
