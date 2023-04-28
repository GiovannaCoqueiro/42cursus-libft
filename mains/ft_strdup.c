#include <stdlib.h>

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

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Result  : %s\n", ft_strdup("Hello, World!"));
	printf("Expected: %s\n", strdup("Hello, World!"));
	printf("Result  : %s\n", ft_strdup(""));
	printf("Expected: %s\n", strdup(""));
}
