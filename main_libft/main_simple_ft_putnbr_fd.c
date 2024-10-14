/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_simple_ft_putnbr_fd.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:07:43 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 11:09:47 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  // Para open
#include <unistd.h> // Para close

void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	int	fd;

	fd = open("numero.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putnbr_fd(42, fd);
	close(fd);
	return (0);
}
