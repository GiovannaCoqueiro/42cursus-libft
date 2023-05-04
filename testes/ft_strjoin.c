#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*strjoin(char const *s1, char const *s2);

int	main(void)
{
	char	str1[] = "Hello,";
	char	str2[] = " World!";
	char	str3[] = "";

	printf("Result  : %s\n", ft_strjoin(str1, str2));
	printf("Expected: %s\n", strjoin(str1, str2));
	printf("Result  : %s\n", ft_strjoin(str3, str2));
	printf("Expected: %s\n", strjoin(str3, str2));
	printf("Result  : %s\n", ft_strjoin(str1, str3));
	printf("Expected: %s\n", strjoin(str1, str3));
	printf("Result  : %s\n", ft_strjoin(str3, str3));
	printf("Expected: %s\n", strjoin(str3, str3));
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy((void *)dest, s1, s1_len + 1);
	ft_memcpy((void *)&dest[s1_len], s2, s2_len + 1);
	return (dest);
}

//function from the internet, only used for comparison
char	*strjoin(char const *s1, char const *s2)
{
	char	*ccat;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = (ft_strlen((char *)s1));
	len_s2 = (ft_strlen((char *)s2));
	ccat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ccat == NULL)
		return (NULL);
	strlcpy(&ccat[0], s1, len_s1 + 1);
	strlcpy(&ccat[len_s1], s2, len_s2 + 1);
	return (ccat);
}
