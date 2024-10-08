/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:01:27 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/01 19:19:32 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cast_s;

	cast_s = (unsigned char *)s;
	while (n != 0)
	{
		*cast_s = 0;
		cast_s++;
		n--;
	}
}
