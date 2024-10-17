/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:38:23 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/17 17:54:27 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_dest;
	unsigned char	*cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	if (n == 0)
		return (dest);
	if (dest == NULL && src == NULL && n != 0)
		return (NULL);
	while (n != 0)
	{
		*cast_dest = *cast_src;
		cast_dest++;
		cast_src++;
		n--;
	}
	return (dest);
}
