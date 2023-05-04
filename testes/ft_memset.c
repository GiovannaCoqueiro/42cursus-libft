#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_print_test(int c, size_t n, char *arr, char *arr1);

int	main(void)
{
	char	*arr;
	char	*arr1;
	size_t	count;
	size_t	n;

	n = 5;
	arr = malloc(n);
	arr1 = malloc(n);
	count = -1;
	while (++count < n)
	{
		arr[count] = count;
		arr1[count] = count;
	}
	ft_print_test(-3, n, arr, arr1);
	ft_print_test('a', n, arr, arr1);
	ft_print_test(300, n, arr, arr1);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
		((unsigned char *)s)[count++] = c;
	return (s);
}

void	ft_print_test(int c, size_t n, char *arr, char *arr1)
{
	size_t	count;

	count = -1;
	printf("Original block:\n");
	while (++count < n)
		printf("%d ", arr[count]);
	printf("\nAfter memset:\n");
	ft_memset(arr, c, n);
	printf("Result:\n");
	count = -1;
	while (++count < n)
		printf("%d ", arr[count]);
	printf("\n");
	memset(arr1, c, n);
	printf("Expected:\n");
	count = -1;
	while (++count < n)
		printf("%d ", arr1[count]);
	printf("\n");
}
