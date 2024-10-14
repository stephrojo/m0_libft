/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:51:53 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 12:01:05 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	cast_c;

	cast_c = (unsigned char)c;
	if (cast_c >= 'A' && cast_c <= 'Z')
	{
		return (cast_c + 32);
	}
	return (c);
}
