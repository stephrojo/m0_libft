/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_memchr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:44:48 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/12 13:31:53 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	const char *str;
	char *result;

	str = "Hello, world!";
	result = ft_memchr(str, 'w', 13);
	if (result != NULL) {
		printf("Se encontró '%c' en la posición: %ld\n", *result, result - str);
	} else {
		printf("Carácter no encontrado.\n");
	}
	return (0);
}
