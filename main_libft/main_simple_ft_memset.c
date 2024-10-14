/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_memset.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:01:59 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 12:03:11 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n);

int main(void)
{
    char str[30] = "Hola, ejemplo para memset";
    
    printf("Antes de ft_memset: %s\n", str);
    ft_memset(str, '*', 5);
    printf("Después de ft_memset: %s\n", str);
    return (0);
}
