/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:29:12 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 19:34:57 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../entregables_obligatorio/libft.h"
void    main(void)
{
    int number;
    char    *num_str;
    
    number = 7849;
    num_str = ft_itoa(number);
    printf("numero convertido: %s\n", num_str);
    free(num_str);
}