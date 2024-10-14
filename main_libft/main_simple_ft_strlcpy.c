/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_strlcpy.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:04:43 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 16:10:06 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int main(void)
{
	char *src;
	char dst[6];
	size_t size;
	size_t result;
	
	src = "Holis";
	size = sizeof(dst);
	result = ft_strlcpy(dst, src, size);
	printf("Cadena copiada: %s\n", dst);
	printf("Longitud de la cadena original: %zu\n", result);
	return (0);
}
