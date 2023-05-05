/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:17:31 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/05 09:17:32 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	result;

	count = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	sign = 1;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	result = 0;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result *= 10;
		result += str[count] - '0';
		count++;
	}
	return (result * sign);
}
