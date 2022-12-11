/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:04:26 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 17:57:37 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_printbase16x(unsigned long int nbr, int *count)
{
	char	*basex;

	basex = "0123456789abcdef";
	if (nbr < 16)
		ft_printchar(basex[nbr % 16], count);
	else
	{
		ft_printbase16x(nbr / 16, count);
		ft_printbase16x(nbr % 16, count);
	}
}

void	ft_printmem(const void *ptr, int *count)
{
	unsigned long int	adrs;

	adrs = (unsigned long int)ptr;
	ft_printstr("0x", count);
	ft_printbase16x(adrs, count);
}
