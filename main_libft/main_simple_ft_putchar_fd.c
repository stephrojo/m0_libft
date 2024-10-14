/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_putchar_fd.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:41:51 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 10:01:03 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h> 

void	ft_putchar_fd(char c, int fd);

int main(void)
{
	int fd = open("pruebaputchar.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putchar_fd('s', fd);
	close(fd);
	return (0);
}
