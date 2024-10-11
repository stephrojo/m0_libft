/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_itoa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:12:36 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 20:13:06 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int main() {
    int number;
    
    // Pruebas con diferentes números
    number = 568479;
    char *number_str = ft_itoa(number);
    printf("El número convertido es: %s\n", number_str);
    free(number_str); // Liberar la memoria asignada
    return (0);
}
