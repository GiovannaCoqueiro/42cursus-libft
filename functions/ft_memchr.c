#include "libft.h"

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
