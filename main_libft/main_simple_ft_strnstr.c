/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_strnstr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:43:49 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 16:44:37 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(void) {
    const char *haystack = "Hola 42, aquí estamos!";
    const char *needle = "42";
    size_t len = 20;

    char *result = ft_strnstr(haystack, needle, len);
    if (result)
        printf("Se encontró: '%s'\n", result);
    else
        printf("No se encontró la subcadena,sorryyyyy\n");
    return (0);
}
