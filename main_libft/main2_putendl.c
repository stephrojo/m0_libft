/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2_putendl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:52:30 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/14 20:01:39 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../entregables_obligatorio/libft.h"

void    main(void)
{
    char    *str;
    int open_value;

    str = "Holaaaaa";
    open_value = open("holaines.txt", 1);
    if(open_value == -1)
        return ;
    ft_putendl_fd(str, open_value);
}