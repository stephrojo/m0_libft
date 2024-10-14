/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_strlcat.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:22:30 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 16:32:29 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
    char dest[20];
    const char *src;
    size_t size;

    dest[0] = 'H';
    dest[1] = 'o';
    dest[2] = 'l';
    dest[3] = 'a';
    dest[4] = '\0';
    src = "42";
    size = sizeof(dest);
    printf("Cadena original: %s\n", dest);
    printf("Longitud original: %zu\n", ft_strlen(dest));
    size_t result = ft_strlcat(dest, src, size);
    printf("Cadena post-strlcat: %s\n", dest);
    printf("Longitud total post-strlcat: %zu\n", result);
    return (0);
}
