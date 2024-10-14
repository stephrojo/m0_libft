/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_strncmp.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:30:04 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 13:31:57 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
    const char *str1 = "Hola";
    const char *str2 = "Hola, ¿qué tal?";
    int result;

    result = ft_strncmp(str1, str2, 4);
    printf("Comparando '%s' y '%s' hasta 4 caracteres: %d\n", str1, str2, result);

    result = ft_strncmp(str1, "42Mad", 4);
    printf("Comparando '%s' y '42Mad' hasta 4 caracteres: %d\n", str1, "Hola");

    return (0);
}
