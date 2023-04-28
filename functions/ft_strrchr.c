#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*str;
	char	character;

	str = (char *)s;
	character = (unsigned char)c;
	count = ft_strlen(str);
	if (character == '\0')
		return (&str[count]);
	while (s[--count] >= 0)
		if (s[count] == character)
			return (&str[count]);
	return (0);
}
