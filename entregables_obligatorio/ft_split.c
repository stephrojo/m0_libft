/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:56:50 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 20:17:13 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			word_count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_count);
}

static char	*ft_get_substr(const char **s, char c)
{
	size_t	word_length;
	char	*substr;

	word_length = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[word_length] && (*s)[word_length] != c)
		word_length++;
	substr = ft_substr(*s, 0, word_length);
	*s += word_length;
	return (substr);
}

char	**ft_split(const char *s, char c)
{
	char	**array_substrs;
	size_t	substrs;
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	substrs = ft_count_words(s, c);
	array_substrs = (char **)malloc(sizeof(char *) * (substrs + 1));
	if (!array_substrs)
		return (NULL);
	while (index < substrs)
	{
		array_substrs[index] = ft_get_substr(&s, c);
		if (!array_substrs[index])
		{
			while (index > 0)
				free(array_substrs[--index]);
			free(array_substrs);
			return (NULL);
		}
		index++;
	}
	array_substrs[index] = NULL;
	return (array_substrs);
}
