#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	char	str[] = "Hello, World!";
	char	substr[] = "World!";
	char	H[] = "H";
	char	*empty = "";

	printf("Result  : %s | ", ft_strnstr(str, substr, 0));
	printf("Expected: %s\n", strnstr(str, substr, 0));

	printf("Result  : %s | ", ft_strnstr(str, substr, -1));
	printf("Expected: %s\n", strnstr(str, substr, -1));

	printf("Result  : %s | ", ft_strnstr(str, H, -1));
	printf("Expected: %s\n", strnstr(str, H, -1));

	printf("Result  : %s | ", ft_strnstr(str, "o", -1));
	printf("Expected: %s\n", strnstr(str, "o", -1));

	printf("Result  : %s | ", ft_strnstr(empty, empty, -1));
	printf("Expected: %s\n", strnstr(empty, empty, -1));

	printf("Result  : %s | ", ft_strnstr(empty, empty, 0));
	printf("Expected: %s\n", strnstr(empty, empty, 0));

	printf("Result  : %s | ", ft_strnstr(empty, "abcd", -1));
	printf("Expected: %s\n", strnstr(empty, "abcd", -1));

	printf("Result  : %s | ", ft_strnstr(str, "Hello", 5));
	printf("Expected: %s\n", strnstr(str, "Hello", 5));

	printf("Result  : %s | ", ft_strnstr(empty, "12345", 5));
	printf("Expected: %s\n", strnstr(empty, "12345", 5));

	printf("Result  : %s | ", ft_strnstr(str, "World!", 13));
	printf("Expected: %s\n", strnstr(str, "World!", 13));

	printf("Result  : %s | ", ft_strnstr(str, "d!", 12));
	printf("Expected: %s\n", strnstr(str, "d!", 12));

	printf("Result  : %s | ", ft_strnstr(str, H, 1));
	printf("Expected: %s\n", strnstr(str, H, 1));

	printf("Result  : %s | ", ft_strnstr("A", H, 1));
	printf("Expected: %s\n", strnstr("A", H, 1));

	printf("Result  : %s | ", ft_strnstr("22", "l", 2));
	printf("Expected: %s\n", strnstr("22", "l", 2));
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	c;

	c = 0;
	while ((str1[c] && str2[c]) != '\0' && str1[c] == str2[c] && c < size)
		c++;
	return ((str1[c] - str2[c]));
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	sub_len;
	size_t	lc;
	char	*bbig;

	bbig = (char *)big;
	sub_len = ft_strlen(little);
	if (sub_len == 0)
		return (bbig);
	count = 0;
	while (big[count] != '\0' && count < len)
	{
		lc = 0;
		while (big[count + lc] == little[lc] && count + lc < len)
		{
			if (little[lc + 1] == '\0')
				return (&bbig[count]);
			lc++;
		}
		count++;
	}
	return (NULL);
}

//function from the internet, only used for comparison
char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while ((haystack[i + c] == needle[c]) && (i + c) < len)
		{
			if (needle[c + 1] == '\0')
				return ((char *)(&haystack[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
