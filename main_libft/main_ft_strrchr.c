/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 20:46:50 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // malloc y free
#include <stddef.h> // size_t y NULL

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char *argv[])
{
	char	find_char;
	char	*result;
	int		location;
	char	num_char;

	if (argc < 3)
	{
		write(1, "Error: Not enough arguments.\n", 29);
		return (1);
	}
	find_char = argv[2][0];		
	result = ft_strrchr(argv[1], find_char);
	if (result == NULL)
	{
		write(1, "KO: No character found.\n", 24);
	}
	else
	{
		write(1, "OK: Character ", 14);
		write(1, &find_char, 1);
		write(1, " found. ", 8);
		write(1, "It appears here for the last time: ", 36);
		location = (result - argv[1]) + 1;
		if (location >= 0 && location <= 9)
		{
			num_char = location + '0'; //int to char
			write(1, &num_char, 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
