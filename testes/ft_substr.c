#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "0123456789";
	char	str3[] = "";
	char	str4[] = "42";

	printf("Result  : %s\n", ft_substr(str1, 0, 42000));
	printf("Expected: %s\n", substr(str1, 0, 42000));
	printf("Result  : %s\n", ft_substr(str1, 1, 1));
	printf("Expected: %s\n", substr(str1, 1, 1));
	printf("Result  : %s\n", ft_substr(str1, 100, 1));
	printf("Expected: %s\n", substr(str1, 100, 1));
	printf("Result  : %s\n", ft_substr(str4, 42, 42000000));
	printf("Expected: %s\n", substr(str4, 42, 42000000));
	printf("Result  : %s\n", ft_substr(str2, 9, 10));
	printf("Expected: %s\n", substr(str2, 9, 10));
	printf("Result  : %s\n", ft_substr(str4, 0, 0));
	printf("Expected: %s\n", substr(str4, 0, 0));
	printf("Result  : %s\n", ft_substr(str1, 8, 14));
	printf("Expected: %s\n", substr(str1, 8, 14));
	printf("Result  : %s\n", ft_substr(str2, 1, 3));
	printf("Expected: %s\n", substr(str2, 1, 3));
	printf("Result  : %s\n", ft_substr(str3, 5, 5));
	printf("Expected: %s\n", substr(str3, 5, 5));
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	src_len;

	src_len = (size_t)ft_strlen(src);
	count = 0;
	if (size > 0)
	{
		while (count < size - 1 && src[count] != '\0')
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (src_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*str;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	slen = ft_strlen(str);
	if (start > slen)
		return (ft_strdup("\0"));
	if (start + len > slen)
		dest = (char *)malloc(slen - start + 1 * sizeof(char));
	else
		dest = (char *)malloc(len + 1 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, str + start, len + 1);
	return (dest);
}

//function from the internet, only used for comparison
char	*substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		sstr = (char *)malloc((len + 1) * sizeof(char));
	else
		sstr = (char *)malloc((strlen - start + 1) * sizeof(char));
	if (sstr == NULL)
		return (NULL);
	ft_strlcpy(sstr, (s + start), (len + 1));
	return (sstr);
}
