/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:03:48 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 10:44:44 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verify_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static size_t	ft_count_numbers(int n)
{
	size_t	num_count;

	num_count = ft_verify_sign(n);
	while (n != 0)
	{
		n /= 10;
		num_count++;
	}
	return (num_count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num_length;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	num_length = ft_count_numbers(n);
	str = (char *)malloc(num_length + 1);
	if (!str)
		return (NULL);
	str[num_length] = '\0';
	sign = ft_verify_sign(n);
	if (sign)
		n = -n;
	while (num_length != 0)
	{
		str[num_length - 1] = (n % 10) + '0';
		n /= 10;
		num_length--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
