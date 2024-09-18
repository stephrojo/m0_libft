/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/18 15:42:28 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c);

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	if (argc < 2)
		write(1, "error\n", 6);
	else
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			c = argv[1][i];
			if (ft_isalpha(c))
				write(1, "Es una letra\n", 13);
			else
				write(1, "No es una letra\n", 16);
			i++;
		}
		return (0);
	}
}
