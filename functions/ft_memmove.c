#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ddest;
	const char	*ssrc;

	ddest = (char *)dest;
	ssrc = (const char *)src;
	if (ddest == ssrc)
		return (dest);
	if (ddest < ssrc)
	{
		while (n-- > 0)
			*ddest++ = *ssrc++;
		return (dest);
	}
	ddest += n - 1;
	ssrc += n - 1;
	while (n-- > 0)
		*ddest-- = *ssrc--;
	return (dest);
}
