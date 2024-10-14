/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_striteri.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:50:03 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 11:51:19 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*));

void ft_toupper(unsigned int index, char *c);

int main(void)
{
	char str[] = "hola mundo";

	ft_striteri(str, ft_toupper);
	printf("Resultado: %s\n", str);
	return (0);
}
