/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/01 20:12:26 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // malloc y free
#include <stddef.h> // size_t y NULL

char	*ft_strchr(const char *s, int c);

int	main(int argc, char *argv[])
{
	char	find_char;
	char	*result;
	int		location;
	char	num_char;

	if (argc < 3)
	{
		write(1, "error\n", 6);
		return (1);
	}
	find_char = argv[2][0];		
	result = ft_strchr(argv[1], find_char);
	if (result == NULL)
	{
		write(1, "No se encontró el caracter\n", 28);
	}
	else
	{
		write(1, "Se encontró la siguiente consulta: ", 35);
		write(1, &find_char, 1);
		write(1, " y aparece por primera vez en el caracter: ", 43);
		location = (result - argv[1]) + 1;
		if (location >= 0 && location <= 9)
		{
			num_char = location + '0';  // Convierte el número a su representación de carácter
			write(1, &num_char, 1);     // Imprime la posición
		}
		write(1, "\n", 1);
	}
	return (0);
}
