/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_itoa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:12:36 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 20:54:19 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int main(void)
{
    int number;
    
    number = 568479;
    char *number_str = ft_itoa(number);
    printf("Converted number: %s\n", number_str);
    free(number_str);
    return (0);
}
