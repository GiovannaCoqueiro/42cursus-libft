#include "libft.h"

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
