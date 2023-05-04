#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	src[] = "World!";
	char	dest[] = "Hello, ";
	char	src1[] = "World!";
	char	dest1[] = "Hello, ";
	size_t	size;

	size = 4;
	printf("Source ft: %s\n", src1);
	printf("Concatenated ft: %zu, %s\n", ft_strlcat(dest1, src1, size), dest1);
	printf("Source   : %s\n", src);
	printf("Concatenated   : %zu, %s\n", strlcat(dest, src, size), dest);
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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_count;
	size_t	dest_count;
	size_t	src_len;
	size_t	dest_len;

	src_len = (size_t)ft_strlen(src);
	dest_len = (size_t)ft_strlen(dest);
	src_count = 0;
	dest_count = dest_len;
	if (size > dest_len)
	{
		while (dest_count < size - 1 && src[src_count] != '\0')
			dest[dest_count++] = src[src_count++];
		dest[dest_count] = '\0';
		return (dest_len + src_len);
	}
	return (src_len + size);
}
