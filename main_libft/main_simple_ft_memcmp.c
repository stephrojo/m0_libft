/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_memcmp.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:18:49 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 12:21:29 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    const char *str1;
    const char *str2;
    int result;

    str1 = "Hosa";
    str2 = "Hola, ke ase";
    result = ft_memcmp(str1, str2, 3);
    printf("Comparando '%s' y '%s': %d\n", str1, str2, result);
    return (0);
}
