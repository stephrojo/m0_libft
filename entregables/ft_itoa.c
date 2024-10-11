/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:03:48 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 20:08:39 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verifysign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static size_t	ft_countnum(int n)
{
	size_t	count;

	count = ft_verifysign(n);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	numlen;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	numlen = ft_countnum(n);
	sign = ft_verifysign(n);
	str = (char *)malloc(numlen + 1);
	if (!str)
		return (NULL);
	str[numlen] = '\0';
	if (sign)
		n = -n;
	while (numlen != 0)
	{
		str[numlen - 1] = (n % 10) + '0';
		n /= 10;
		numlen--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
