/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_substr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:52:24 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 17:12:03 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    const char *str = "Holaaa 42 Madrid";
    char *substr;

    substr = ft_substr(str, 7, 5);
    printf("Subcadena: %s\n", substr);
    free(substr);
    return (0);
}
