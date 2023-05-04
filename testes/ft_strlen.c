#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);

int	main(void)
{
	printf("Result: %d Espected: %lu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("Result: %d Espected: %lu\n", ft_strlen(""), strlen(""));
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
