/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/18 15:58:09 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c);

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
			if (ft_isascii(c))
				write(1, "Es ascii\n", 9);
			else
				write(1, "No es ascii\n", 12);
			i++;
		}
		return (0);
	}
}
