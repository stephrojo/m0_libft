/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_memcmp.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:18:49 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 13:28:49 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 6};
    int result;
    result = ft_memcmp(array1, array2, sizeof(int) * 4);
    printf("Comparando arr1 y arr2: %d\n", result);
    return (0);
}
