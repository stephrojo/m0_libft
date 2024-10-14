/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_strtrim.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:52:21 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 17:23:37 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int main(void)
{
	const char	*str1;
	const char	*set;
	char 		*trimmed;

	str1 = "   Hola, 42 Madrid!   ";
	set = " ";
	trimmed = ft_strtrim(str1, set);
	if (trimmed)
	{
		printf("Original: '%s'\n", str1);
		printf("Cortada: '%s'\n", trimmed);
		free(trimmed);
	}
	else
		printf("Error al cortar la cadena.\n");
	return (0);
}
