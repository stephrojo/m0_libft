/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_strlen.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:07:55 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 12:09:41 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s);

int main(void)
{
	const char *str = "Hola, prueba strlen!";
	size_t length;

	length = ft_strlen(str);
	printf("La longitud de la cadena '%s' es: %zu\n", str, length);
	return (0);
}
