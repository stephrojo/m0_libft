/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:17 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/29 22:21:09 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(int c);

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	if (argc < 2)
	{
		write(1, "error\n", 6);
		return (1);
	}
	else
	{
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

/*int    main(void)
{
	int	c;
	c = '5'; Como sólo es un caracter que analiza uno por uno hay que transformarlo a char?
	if (ft_isalnum(c))
		write(1, "Es una letra/digito\n", 20);
	else
		write(1, "No es una letra/digito\n", 23);
	return(0);
}
*/