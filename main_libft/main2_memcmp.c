/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2_memcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:38:23 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 19:44:03 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../entregables_obligatorio/libft.h"

void    main (void)
{
    char *str1="abc";
    char *str2="abcdef";
    int result;

    result = ft_memcmp(str1, str2, 5);
    printf("Resutlado memcmp: %d\n", result);
}
