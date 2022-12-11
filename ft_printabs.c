/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printabs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:46:27 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 18:56:58 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printabs(unsigned int nbr, int *count)
{
	if (nbr > 9)
	{
		ft_printabs(nbr / 10, count);
		ft_printabs(nbr % 10, count);
	}
	else
		ft_printchar(nbr + '0', count);
}
