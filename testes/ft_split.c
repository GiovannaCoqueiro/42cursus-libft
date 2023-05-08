#include <stdlib.h>
#include <stdio.h>

char		**ft_split(char const *s, char c);
static char	**ft_sep_words(char **strs, int size, char *s, char c);
void		*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	**arr;

	arr = ft_split("oHello, World!o", 'o');
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n\n", arr[3]);
	arr = ft_split("Hello, World!", 0);
	printf("%s\n", arr[0]);
	printf("%s\n\n", arr[1]);
	arr = ft_split("     ", ' ');
	printf("%s\n\n", arr[0]);
	arr = ft_split("chinimala", ' ');
	printf("%s\n", arr[0]);
	printf("%s\n\n", arr[1]);
	arr = ft_split("", ' ');
	printf("%s\n\n", arr[0]);
	arr = ft_split("Hello, World!a", 'a');
	printf("%s\n", arr[0]);
	printf("%s\n\n", arr[1]);
	arr = ft_split("aHello, World!", 'a');
	printf("%s\n", arr[0]);
	printf("%s\n\n", arr[1]);
	arr = ft_split("--1-2--3---4----5-----42", '-');
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
	printf("%s\n", arr[4]);
	printf("%s\n", arr[5]);
	printf("%s\n\n", arr[6]);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		pos;
	int		size;

	if (s == NULL)
		return (NULL);
	pos = -1;
	size = 0;
	while (s[++pos] != '\0')
	{
		if (s[pos] != c && (s[pos + 1] == c || s[pos + 1] == '\0'))
			size++;
	}
	strs = malloc((size + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	strs = ft_sep_words(strs, size, (char *)s, c);
	return (strs);
}

static char	**ft_sep_words(char **strs, int size, char *s, char c)
{
	int	count;
	int	c_word;
	int	temp;

	count = 0;
	c_word = 0;
	while (c_word < size)
	{
		while (s[count] == c)
			count++;
		temp = count;
		while (s[temp] != c && s[temp] != '\0')
			temp++;
		strs[c_word] = malloc((temp - count + 1) * sizeof(char));
		ft_memcpy((void *)strs[c_word], (const void *)&s[count], temp);
		strs[c_word][temp - count] = '\0';
		count = temp;
		c_word++;
	}
	strs[c_word] = NULL;
	return (strs);
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
