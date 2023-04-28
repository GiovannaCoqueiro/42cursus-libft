#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
		((unsigned char *)s)[count++] = c;
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdio.h>
#include <string.h>

void	ft_print_test(size_t n, char *arr, char *arr1);

int	main(void)
{
	char	*arr;
	char	*arr1;
	size_t	n;

	n = 5;
	arr = malloc(n);
	arr1 = malloc(n);
	ft_memset(arr, 'x', n);
	ft_print_test(n, arr, arr1);
	printf("\n");
	ft_memset(arr, -5, n);
	ft_print_test(n, arr, arr1);
	printf("\n");
	ft_memset(arr, 300, n);
	ft_print_test(n, arr, arr1);
}

void	ft_print_test(size_t n, char *arr, char *arr1)
{
	size_t	count;

	count = -1;
	printf("Original block:\n");
	while (++count < n)
		printf("%d ", arr[count]);
	printf("\nAfter bzero:\n");
	ft_bzero(arr, n);
	printf("Result:\n");
	count = -1;
	while (++count < n)
		printf("%d ", arr[count]);
	printf("\n");
	bzero(arr1, n);
	printf("Expected:\n");
	count = -1;
	while (++count < n)
		printf("%d ", arr1[count]);
	printf("\n");
}

