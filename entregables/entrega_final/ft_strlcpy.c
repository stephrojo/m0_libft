/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:17:27 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/09 23:24:44 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')  // Calculamos longitud de src
		src_len++;

	if (size == 0)  // Si size es 0, solo devolvemos la longitud de src
		return (src_len);

	i = 0;
	while (i < (size - 1) && src[i] != '\0')  // Copiamos hasta size - 1 o fin de src
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';  // Terminamos con '\0' en dst si size > 0

	return (src_len);  // Devolvemos la longitud de src
}

