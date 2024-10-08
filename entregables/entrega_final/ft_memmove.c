/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:13:38 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/08 22:45:25 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cast_dest;
	const unsigned char	*cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (cast_src < cast_dest)
	{
		while (n--)
			cast_dest[n] = cast_src[n];
	}
	else
	{
		while (n--)
		{
			*cast_dest = *cast_src;
			cast_dest++;
			cast_src++;
		}
	}
	return (dest);
}
