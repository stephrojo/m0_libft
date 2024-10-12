/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:44:04 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 22:35:36 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cast_s1;
	const unsigned char	*cast_s2;

	cast_s1 = (const unsigned char *)s1;
	cast_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cast_s1[i] != cast_s2[i])
			return (cast_s1[i] - cast_s1[i]);
		i++;
	}
	return (0);
}
