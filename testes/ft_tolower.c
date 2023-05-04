#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	printf("Result: %c\n", ft_tolower('a'));
	printf("Expected: %c\n", tolower('a'));
	printf("Result: %c\n", ft_tolower('A'));
	printf("Expected: %c\n", tolower('A'));
	printf("Result: %c\n", ft_tolower('2'));
	printf("Expected: %c\n", tolower('2'));
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
