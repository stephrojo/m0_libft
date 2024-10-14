/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:21:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 11:04:25 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			nbr;
	long long int	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	if (num / 10 != 0)
		ft_putnbr_fd(num / 10, fd);
	nbr = '0' + (num % 10);
	write(fd, &nbr, 1);
}
