/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_putendl_fd.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:21:50 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 11:22:36 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> // Para open()
#include <unistd.h> // Para close()

void	ft_putendl_fd(char *s, int fd);

int main(void)
{
	int fd;

	fd = open("output_endl.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putendl_fd("Hello 42 Madrid!", fd);
	close(fd);
	return (0);
}
