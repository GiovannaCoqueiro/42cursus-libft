#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	printf("Result: %c\n", ft_toupper('a'));
	printf("Expected: %c\n", toupper('a'));
	printf("Result: %c\n", ft_toupper('A'));
	printf("Expected: %c\n", toupper('A'));
	printf("Result: %c\n", ft_toupper('2'));
	printf("Expected: %c\n", toupper('2'));
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
