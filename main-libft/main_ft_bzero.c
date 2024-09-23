/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/21 13:58:36 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //malloc y free
#include <stddef.h> //size_t

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, unsigned int n);

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
	char	fill_char;

	if (argc < 3)
	{
		write(1, "error\n", 6);
		return (1);
	}
	else
	{
		n = ft_atoi(argv[2]);
		buffer = (char *)malloc(n + 1);
		if (!buffer)
		{
			write(1, "error, no se pudo asignar bloque de memoria\n", 44);
			return (1);
		}
		fill_char = argv[1][0];
		ft_memset(buffer, fill_char, n);
		buffer[n] = '\0';
		write(1, buffer, n);
		write(1, "\n", 1);
		ft_bzero(buffer, (n - 2));
		write(1, buffer, n);
		write(1, "\n", 1);
		free(buffer);
		return (0);
	}
}
