#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = -1;
	while (s[++count] != '\0')
		write(fd, &s[count], 1);
}
