int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Result: %d Espected: %lu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("Result: %d Espected: %lu\n", ft_strlen(""), strlen(""));
}
