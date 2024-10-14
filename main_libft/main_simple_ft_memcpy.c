/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_memcpy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:50:03 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 15:57:09 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
    int src;
    int dest;

    src = 42;
    dest = 0;
    ft_memcpy(&dest, &src, sizeof(int));
    printf("Valor original (src): %d\n", src);
    printf("Valor copiado (dest): %d\n", dest);

    return 0;
}

