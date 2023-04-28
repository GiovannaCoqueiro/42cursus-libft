#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		count;
	int		size;
	char	*dest;

	size = ft_strlen(s);
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	count = -1;
	while (s[++count] != '\0')
		dest[count] = s[count];
	dest[count] = '\0';
	return (dest);
}
