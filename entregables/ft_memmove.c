/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:13:38 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/01 19:45:23 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // size_t
#include <stdlib.h> // malloc y free

static void	src_to_temp(const unsigned char *cast_src, size_t n, unsigned char
*temp_buffer)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		temp_buffer[i] = cast_src[i];
		i++;
	}
}

static void	temp_to_dest(unsigned char *cast_dest, size_t n, unsigned char
*temp_buffer)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		cast_dest[i] = temp_buffer[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_buffer;
	unsigned char		*cast_dest;
	const unsigned char	*cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (const unsigned char *)src;
	temp_buffer = (unsigned char *)malloc(n);
	if (!temp_buffer)
		return (NULL);
	if (dest == src || n == 0)
	{
		free(temp_buffer);
		return (dest);
	}
	else
	{
		src_to_temp(cast_src, n, temp_buffer);
		temp_to_dest(cast_dest, n, temp_buffer);
	}
	free(temp_buffer);
	return (dest);
}
