/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 00:09:37 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 22:31:54 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cast_s;
	unsigned char		cast_c;

	cast_s = (const unsigned char *)s;
	cast_c = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (n != 0)
	{
		if (*cast_s == cast_c)
		{
			return ((void *)cast_s);
		}
		cast_s++;
		n--;
	}
	return (NULL);
}
