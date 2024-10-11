/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_bzero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 01:32:17 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //malloc y free
#include <stddef.h> //size_t

void	ft_bzero(void *s, size_t n);

int    main(void)
{
    char    *buffer;
    size_t    n;
    
    n = 9;
    buffer = (char *)malloc(n);
    if (!buffer)
	{
	write(1, "error, no se pudo asignar bloque de memoria\n", 44);
	return (1);
    }
    ft_bzero(buffer, n);
    free(buffer);
    return (0);
}
