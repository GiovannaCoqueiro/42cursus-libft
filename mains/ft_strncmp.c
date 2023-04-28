#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	if (n == 0)
		return (0);
	c = 0;
	while ((s1[c] && s2[c]) != '\0' && s1[c] == s2[c] && c < n - 1)
		c++;
	return ((s1[c] - s2[c]));
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Result  : %d\n", ft_strncmp("Hello, World!", "", 0));
	printf("Expected: %d\n", strncmp("Hello, World!", "", 0));
	printf("Result  : %d\n", ft_strncmp("Hello", "Helle", 4));
	printf("Expected: %d\n", strncmp("Hello", "Helle", 4));
	printf("Result  : %d\n", ft_strncmp("Hello", "Helle", 5));
	printf("Expected: %d\n", strncmp("Hello", "Helle", 5));
	printf("Result  : %d\n", ft_strncmp("", "Hello", 5));
	printf("Expected: %d\n", strncmp("", "Hello", 5));
}
