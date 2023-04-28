#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count;
	const char	*block;

	block = (const char *)s;
	count = 0;
	while (count < n)
	{
		if (block[count] == (char)c)
			return ((void *)&block[count]);
		count++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str[] = "Hello, World!";
	void	*result;
	void	*result2;

	result = ft_memchr((void *)str, 72, 20);
	result2 = memchr((void *)str, 72, 20);
	printf("Result  : %p\n", result);
	printf("Expected: %p\n", result2);
	result = ft_memchr((void *)str, 94, 20);
	result2 = memchr((void *)str, 94, 20);
	printf("Result  : %p\n", result);
	printf("Expected: %p\n", result2);
	result = ft_memchr((void *)str, 32, 20);
	result2 = memchr((void *)str, 32, 20);
	printf("Result  : %p\n", result);
	printf("Expected: %p\n", result2);
}
