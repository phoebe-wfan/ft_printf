/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:46:36 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 18:59:10 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
		ft_printstr("-2147483648", count);
	else if (nbr < 0)
	{
		ft_printchar('-', count);
		ft_printnbr(-nbr, count);
	}
	else if (nbr > 9)
	{
		ft_printnbr(nbr / 10, count);
		ft_printnbr(nbr % 10, count);
	}
	else
		ft_printchar(nbr + '0', count);
}
