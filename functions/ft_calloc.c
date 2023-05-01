#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	len;

	len = nmemb * size;
	if (nmemb != len / size)
		return (NULL);
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, len);
	return (arr);
}
