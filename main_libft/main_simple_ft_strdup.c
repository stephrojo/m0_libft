/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_strdup.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:35:36 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 13:38:51 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s);

int main(void)
{
	const char *original = "Holaaaaa, ya quiero pasar la libft!";
	char *duplicate;

	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return (1);
	}

	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", duplicate);

	free(duplicate);
	return (0);
}
