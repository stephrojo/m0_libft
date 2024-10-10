/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:53:25 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/09 00:15:47 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length_s1;
	size_t	length_s2;
	size_t	i;
	char	*str_cat;

	if (!s1 || !s2)
		return (NULL);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	str_cat = (char *)malloc(length_s1 + length_s2 + 1);
	if (!str_cat)
		return (NULL);
	i = 0;
	while (i < length_s1)
	{
		str_cat[i] = s1[i];
		i++;
	}
	while (i < length_s1 + length_s2)
	{
		str_cat[i] = s2[i - length_s1];
		i++;
	}
	str_cat[i] = '\0';
	return (str_cat);
}
