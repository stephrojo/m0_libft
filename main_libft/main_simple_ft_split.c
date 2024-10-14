/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_split.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:20:02 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/13 22:25:32 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(const char *s, char c);

int main(void)
{
	const char *str;
	char **result;
	size_t i;

	str = "Hola 42, aqui vamos!";
	result = ft_split(str, ' ');
	i = 0;
	while (result[i] != NULL)
	{
		printf("Palabra %zu: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

