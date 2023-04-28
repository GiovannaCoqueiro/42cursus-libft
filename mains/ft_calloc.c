#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
		((int *)s)[count++] = c;
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	len;

	len = nmemb * size;
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, len);
	return (arr);
}

#include <stdio.h>

int	main(void)
{
	size_t	elements;
	size_t	size;
	void	*block1;
	void	*block2;
	size_t	count;

	elements = 5;
	size = 4;
	block1 = ft_calloc(elements, size);
	block2 = calloc(elements, size);
	if (block2 == NULL)
		return (1);
	printf("Result  :\n");
	count = 0;
	while (count < elements)
		printf("%d ", block1[count++]);
	printf("\nExpected:\n");
	count = 0;
	while (count < elements)
		printf("%d ", block2[count++]);
	printf("\n");
	free (block1);
	free (block2);
	return (0);
}
