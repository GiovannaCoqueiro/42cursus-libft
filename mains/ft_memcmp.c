#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				c;

	if (n <= 0)
		return (0);
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	c = 0;
	while (c < n - 1 && p1[c] == p2[c])
		c++;
	return (p1[c] - p2[c]);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else
			i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};


	printf("Result  : %d\n", ft_memcmp((void *)s, (void *)sCpy, 4));
	printf("Expected: %d\n", memcmp((void *)s, (void *)sCpy, 4));
	printf("Result  : %d\n", ft_memcmp((void *)s, (void *)s2, 0));
	printf("Expected: %d\n", memcmp((void *)s, (void *)s2, 0));
	printf("Result  : %d\n", ft_memcmp((void *)s, (void *)s2, 1));
	printf("Expected: %d\n", memcmp((void *)s, (void *)s2, 1));
	printf("Result  : %d\n", ft_memcmp((void *)s2, (void *)s, 1));
	printf("Expected: %d\n", memcmp((void *)s2, (void *)s, 1));
	printf("Result  : %d\n", ft_memcmp((void *)s2, (void *)s3, 4));
	printf("Expected: %d\n", memcmp((void *)s2, (void *)s3, 4));
}
