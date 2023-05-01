void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	count;

	count = -1;
	while (s[++count] != '\0')
		f(count, &s[count]);
}
