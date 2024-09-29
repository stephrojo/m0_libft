/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/30 00:33:30 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // malloc y free
#include <stddef.h> // size_t y NULL

char	*ft_strchr(const char *s, int c);

int	main(int argc, char *argv[])
{
	char			find_char;
	char			*result;
	const char		*cast_s;

	if (argc < 3)
	{
		write(1, "error\n", 6);
		return (1);
	}

	cast_s = argv[1];
	find_char = argv[2][0];		
	result = ft_strchr(cast_s, find_char);

	if (result == NULL)
	{
		write(1, "No se encontró el caracter\n", 28);
	}
	else
	{
		write(1, "Se encontró la siguiente consulta: ", 35);
		write(1, &find_char, 1);
		write(1, " y aparece por primera vez en el caracter: ", 43);
		write(1, result, 1);
	}

	return (0);
}
