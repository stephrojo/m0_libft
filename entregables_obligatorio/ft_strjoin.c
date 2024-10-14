/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:53:25 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 16:48:06 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length_s1;
	size_t	length_s2;
	size_t	i;
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	new_str = (char *)malloc(length_s1 + length_s2 + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < length_s1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < length_s1 + length_s2)
	{
		new_str[i] = s2[i - length_s1];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
