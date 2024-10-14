/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strojo-h <strojo-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:53:57 by strojo-h          #+#    #+#             */
/*   Updated: 2024/10/11 02:27:01 by strojo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
