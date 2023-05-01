#include "libft.h"

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
