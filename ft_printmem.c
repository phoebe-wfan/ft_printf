/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:04:26 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 19:12:11 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

	if (!ptr)
	{
		ft_printstr("(nil)", count);
		return ;
	}
	adrs = (unsigned long int)ptr;
	ft_printstr("0x", count);
	ft_printbase16x(adrs, count);
}
