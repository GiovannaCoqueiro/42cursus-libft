#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[5];
	char	src1[] = "Hello, world!";
	char	dest1[5];
	size_t	size;

	size = 0;
	printf("Source ft: %s\n", src1);
	printf("Copied ft: %zu, %s\n", ft_strlcpy(dest1, src1, size), dest1);
	printf("Source   : %s\n", src);
	printf("Copied   : %zu, %s\n", strlcpy(dest, src, size), dest);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	src_len;

	src_len = ft_strlen(src);
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
