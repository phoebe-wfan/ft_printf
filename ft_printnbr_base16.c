/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_base16.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:15:54 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 17:51:57 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printnbr_base16(unsigned int nbr, char type, int *count)
{
	unsigned int	nbr2;
	char			*base16;

	nbr2 = nbr;
	if (type == 'x')
		base16 = "0123456789abcdef";
	else if (type == 'X')
		base16 = "01234567890ABCDEF";
	if (nbr < 16)
		ft_printchar(base16[nbr2 % 16], count);
	else
	{
		ft_printnbr_base16(nbr2 / 16, type, count);
		ft_printnbr_base16(nbr2 % 16, type, count);
	}
}
