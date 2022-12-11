/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:18:32 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 15:26:00 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printstr(const char *s, int *count)
{
	if (!s)
		ft_printstr("(null)", count);
	else
	{
		while (*s)
		{
			ft_printchar(*s, count);
			s++;
		}
	}
}
