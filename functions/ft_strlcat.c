/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:07:40 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/03 14:07:41 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_count;
	size_t	dest_count;
	size_t	src_len;
	size_t	dest_len;

	src_len = (size_t)ft_strlen(src);
	dest_len = (size_t)ft_strlen(dest);
	src_count = 0;
	dest_count = dest_len;
	if (size > dest_len)
	{
		while (dest_count < size - 1 && src[src_count] != '\0')
			dest[dest_count++] = src[src_count++];
		dest[dest_count] = '\0';
		return (dest_len + src_len);
	}
	return (src_len + size);
}
