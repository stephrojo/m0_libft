/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/29 22:22:19 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //malloc y free
#include <stddef.h> //size_t

void	ft_bzero(void *s, size_t n);

long unsigned int	ft_chartoint(const char *buffer_size)
{
	long unsigned int	result;

	result = 0;
	while (*buffer_size >= '0' && *buffer_size <= '9')
	{
		result = result * 10 + (*buffer_size - '0');
		buffer_size++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	char	*buffer;
	size_t	n;

	if (argc < 2)
	{
		write(1, "error\n", 6);
		return (1);
	}
	else
	{
		n = ft_chartoint(argv[1]);
		buffer = (char *)malloc(n);
		if (!buffer)
		{
			write(1, "error, no se pudo asignar bloque de memoria\n", 44);
			return (1);
		}
		ft_bzero(buffer, n); //en python tutor vi que al decirle que ponga 0, pone carac. nulo.
		free(buffer);
		return (0);
	}
}

/*int    main(void)
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
*/