/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 00:02:55 by strojo-h          #+#    #+#             */
/*   Updated: 2024/09/25 00:05:26 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write

int	ft_tolower(int c);

int main(int argc, char *argv[])
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
			c = ft_tolower(c);
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}

