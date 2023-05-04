#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	printf("Result  : %d\n", ft_atoi("12345"));
	printf("Expected: %d\n", atoi("12345"));
	printf("Result  : %d\n", ft_atoi("-9876"));
	printf("Expected: %d\n", atoi("-9876"));
	printf("Result  : %d\n", ft_atoi("--9876"));
	printf("Expected: %d\n", atoi("--9876"));
	printf("Result  : %d\n", ft_atoi("++9876"));
	printf("Expected: %d\n", atoi("++9876"));
	printf("Result  : %d\n", ft_atoi("  +42 with spaces"));
	printf("Expected: %d\n", atoi("  +42 with spaces"));
	printf("Result  : %d\n", ft_atoi("invalid"));
	printf("Expected: %d\n", atoi("invalid"));
}

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	result;

	count = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	sign = 1;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	result = 0;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result *= 10;
		result += str[count] - '0';
		count++;
	}
	return (result * sign);
}
