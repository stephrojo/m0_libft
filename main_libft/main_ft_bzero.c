/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/25 00:37:46 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //malloc y free
#include <stddef.h> //size_t

void	ft_bzero(void *s, size_t n);

unsigned int	ft_atoi(const char *buffer_size)
{
	unsigned int	result;

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
		n = ft_atoi(argv[1]);
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
}
