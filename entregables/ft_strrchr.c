/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:33:24 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/30 00:15:26 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last_c;

	i = 0;
	last_c = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_c = s + i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (last_c != NULL)
		return ((char *)last_c);
	return (NULL);
}
