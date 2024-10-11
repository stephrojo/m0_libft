/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 20:43:06 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //malloc y free
#include <stddef.h> //size_t

void	*ft_memchr(const void *s, int c, size_t n);

unsigned int	ft_fakeatoi(const char *buffer_size)
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
	char			*buffer;
	int				n;
	char			find_char;
	char			*result;
	const void		*cast_s;
	char			cast_n;

	if (argc < 4)
	{
		write(1, "Error: Not enough arguments.\n", 29);
		return (1);
	}
	cast_s = argv[1];
	n = ft_fakeatoi(argv[3]);
	cast_n = n + '0';
	buffer = (char *)malloc(cast_n + 1);
	if (!buffer)
	{
		write(1, "Error: unable to allocate memory.\n", 34);
		return (1);
	}
	find_char = argv[2][0];		
	result = ft_memchr(cast_s, find_char, n);
	if (result == NULL)
	{
		write(1, "KO: No character found.\n", 24);
	}
	else
	{
		write(1, "OK: Character ", 14);
		write(1, &find_char, 1);
		write(1, " found. ", 8);
		write(1, "It was in the first ", 20);
		write(1, &cast_n, 1);
		write(1, " bytes.\n", 8);
	}
	free(buffer);
	return (0);
}
