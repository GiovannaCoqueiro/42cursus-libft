/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:06:40 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/03 14:06:41 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;
	size_t		c;

	if (n == 0)
		return (0);
	p1 = (const char *)s1;
	p2 = (const char *)s2;
	c = 0;
	while (c < n - 1 && p1[c] == p2[c])
		c++;
	return (p2[c] - p1[c]);
}
