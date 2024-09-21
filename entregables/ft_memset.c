/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:26:34 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/21 10:10:31 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cast_s;
	unsigned char	cast_c;

	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	while (n != 0)
	{
		*cast_s = cast_c;
		cast_s++;
		n--;
	}
	return (s);
}
