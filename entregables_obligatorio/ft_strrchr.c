/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:33:24 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 13:14:54 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last_c;
	char		cast_c;

	i = 0;
	last_c = NULL;
	cast_c = (char) c;
	if (cast_c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i] != '\0')
	{
		if (s[i] == cast_c)
			last_c = s + i;
		i++;
	}
	if (last_c != NULL)
		return ((char *)last_c);
	return (NULL);
}
