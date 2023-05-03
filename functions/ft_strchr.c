/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:07:30 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/03 14:07:31 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*str;
	char	character;

	str = (char *)s;
	character = (unsigned char)c;
	count = -1;
	while (s[++count] != '\0')
		if (s[count] == character)
			return (&str[count]);
	if (character == '\0')
		return (&str[count]);
	return (0);
}
