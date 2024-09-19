/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/19 17:32:46 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memset(int c);

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	if (argc < 3)
	{
		write(1, "error\n", 6);
		return (1);
	}
	else
	{
		ft_memset(argv[])
		i = 0;
		while (argv[1][i] != '\0')
		{
			c = argv[1][i];
			if (ft_isalnum(c))
				write(1, "Es una letra/digito\n", 20);
			else
				write(1, "No es una letra/digito\n", 23);
			i++;
		}
		return (0);
	}
}
