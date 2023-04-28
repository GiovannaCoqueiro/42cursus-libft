int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*str;
	char	character;

	str = (char *)s;
	character = (unsigned char)c;
	count = ft_strlen(str);
	if (character == '\0')
		return (&str[count]);
	while (s[--count] >= 0)
		if (s[count] == character)
			return (&str[count]);
	return (0);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char	str[] = "Hello, World!";
	char	str1[] = "";

	printf("Result  : %s\nExpected: %s\n", ft_strrchr(str, 'H'), strrchr(str, 'H'));
	printf("Result  : %s\nExpected: %s\n", ft_strrchr(str, 'o'), strrchr(str, 'o'));
	printf("Result  : %s\nExpected: %s\n", ft_strrchr(str, 'h'), strrchr(str, 'h'));
	printf("Result  : %s\nExpected: %s\n", ft_strrchr(str, '\0'), strrchr(str, '\0'));
	printf("Result  : %s\nExpected: %s\n", ft_strrchr(str, 'o' + 100), strrchr(str, 'o' + 100));
	printf("Result  : %s\nExpected: %s\n", ft_strrchr(str1, 'h'), strrchr(str1, 'h'));
}
