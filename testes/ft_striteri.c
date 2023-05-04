#include <stdio.h>

void	f(unsigned int index, char *c);
void	striteri(char *s, void (*f)(unsigned int, char*));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "";

	printf("Result  : ");
	ft_striteri(str1, f);
	printf("\nExpected: ");
	striteri(str1, f);
	printf("\nResult  : ");
	ft_striteri(str2, f);
	printf("\nExpected: ");
	striteri(str2, f);
}

//function from the internet, only used for test
void	f(unsigned int index, char *c)
{
	printf("%s", c + (char)index);
}

//function from the internet, only used for comparison
void	striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i] != '\0')
		(*f)(i, &s[i]);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	count;

	count = -1;
	while (s[++count] != '\0')
		f(count, &s[count]);
}
