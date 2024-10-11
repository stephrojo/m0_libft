/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_atoi.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 01:21:44 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 20:47:50 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	const char	*number_str = "568479";
	int	number;

	number = ft_atoi(number_str);
	printf("Converted number: %i\n", number);
	return (0);
}

