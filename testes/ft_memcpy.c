#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_print_test(char *dest1, char *dest2, char *src, size_t size);

int	main(void)
{
	char	src1[] = "Hello, World!";
	char	src2[] = "";
	char	src3[] = {0, 0};
	char	test1[20];
	char	test2[20];

	ft_print_test(test1, test2, src1, sizeof(src1));
	ft_print_test(test1, test2, src2, sizeof(src2));
	ft_print_test(test1, test2, src3, sizeof(src3));
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

void	ft_print_test(char *dest1, char *dest2, char *src, size_t size)
{
	memset(dest1, 'x', 20);
	memset(dest2, 'x', 20);
	ft_memcpy(dest1, src, size);
	memcpy(dest2, src, size);
	printf("src: %s\n", src);
	printf("ft : %s\n", dest2);
	printf("ori: %s\n", dest2);
	if (strcmp(dest1, dest2) == 0)
		printf("memcpy test passed.\n");
	else
		printf("memcpy test failed.\n");
}
