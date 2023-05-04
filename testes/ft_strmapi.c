#include <stdlib.h>
#include <stdio.h>

char	f(unsigned int index, char c);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*strmapi(char const *s, char (*f)(unsigned int, char));

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "";

	printf("Result  : %s\n", ft_strmapi(str1, f));
	printf("Expected: %s\n", strmapi(str1, f));
	printf("Result  : %s\n", ft_strmapi(str2, f));
	printf("Expected: %s\n", strmapi(str2, f));
}

//function from the internet, only used for test
char	f(unsigned int index, char c)
{
	return (c + (char)index);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	char	*str;
	int		count;

	str = (char *)s;
	dest = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	count = -1;
	while (str[++count] != '\0')
		dest[count] = f(count, str[count]);
	dest[count] = '\0';
	return (dest);
}

//function from the internet, only used for comparison
char	*strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*c_s;

	if (!s || !f)
		return (NULL);
	c_s = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	i = -1;
	if (c_s == NULL)
		return (NULL);
	while (s[++i] != '\0')
		c_s[i] = (*f)(i, s[i]);
	c_s[i] = '\0';
	return (c_s);
}
