/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:28:46 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/24 23:21:35 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //malloc y free
#include <stddef.h> //size_t

void    *ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

int		main(int argc, char *argv[])
{
	char	*buffer_dest;
	size_t	n;
	int i;
	
	i = 0;
		if (argc < 2)
	{
		write(1, "error\n", 6);
		return (1);
	}
	else
	{
		n = ft_strlen(argv[1]);
		//n = 5;
		buffer_dest = (char *)malloc(n + 1);
		if (!buffer_dest)
		{
			write(1, "error, no se pudo asignar bloque de memoria\n", 44);
			return (1);
		}
		ft_memmove(buffer_dest, argv[1], n);
		buffer_dest[n] = '\0';
		while (buffer_dest[i] != '\0')
		{
			write(1, &buffer_dest[i], 1);
			i++;
		}
		write(1, "\n", 1);
		free(buffer_dest);
		return (0);
	}
}