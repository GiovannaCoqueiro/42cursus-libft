#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strtrim(char const *s1, char const *set);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	printf("Result  : %s\n", ft_strtrim("xxHello, World!xx", "x"));
	printf("Expected: Hello, World!\n");
	printf("Result  : %s\n", ft_strtrim("xxHello, World!", "x"));
	printf("Expected: Hello, World!\n");
	printf("Result  : %s\n", ft_strtrim("Hello, World!xx", "x"));
	printf("Expected: Hello, World!\n");
	printf("Result  : %s\n", ft_strtrim("xxHello, World!xx", "x"));
	printf("Expected: Hello, World!\n");
	printf("Result  : %s\n", ft_strtrim("xxxx", "x"));
	printf("Expected:\n");
	printf("Result  : %s\n", ft_strtrim("", "x"));
	printf("Expected:\n");
	printf("Result  : %s\n", ft_strtrim("Hello, World!", ""));
	printf("Expected: Hello, World!\n");
	printf("Result  : %s\n", ft_strtrim("", ""));
	printf("Expected:\n");
	printf("Result  : %s\n", ft_strtrim("Hello, World!", "Helo Wrd!"));
	printf("Expected: ,\n");

}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*str;
	char	character;

	str = (char *)s;
	character = (unsigned char)c;
	count = -1;
	while (s[++count] != '\0')
		if (s[count] == character)
			return (&str[count]);
	if (character == '\0')
		return (&str[count]);
	return (0);
}

char	*ft_strdup(const char *s)
{
	int		count;
	int		size;
	char	*dest;

	size = ft_strlen(s);
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	count = -1;
	while (s[++count] != '\0')
		dest[count] = s[count];
	dest[count] = '\0';
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ddest;
	const char	*ssrc;

	ddest = (char *)dest;
	ssrc = (const char *)src;
	while (n-- > 0)
		*ddest++ = *ssrc++;
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	size;
	char	*str;

	if (set == NULL || s1 == NULL)
		return ((char *)s1);
	start = 0;
	while (ft_strchr(set, s1[start]) != NULL && s1[start] != '\0')
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) != NULL && end > start)
		end--;
	size = end - start + 1;
	if (size <= 0)
		return (ft_strdup(""));
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy((void *)str, (void *)&s1[start], size);
	str[size] = '\0';
	return (str);
}
