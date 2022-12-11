/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:58:12 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 18:35:15 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_checktype(va_list args, const char type, int *count)
{
	if (type == 'c')
		ft_printchar((char)va_arg(args, int), count);
	else if (type == 's')
		ft_printstr(va_arg(args, char *), count);
	else if (type == 'u')
		ft_printabs(va_arg(args, unsigned int), count);
	else if (type == 'x' || type == 'X')
		ft_printnbr_base16(va_arg(args, int), type, count);
	else if (type == 'd' || type == 'i')
		ft_printnbr(va_arg(args, int), count);
	else if (type == 'p')
		ft_printmem(va_arg(args, void *), count);
	else if (type == '%')
		ft_printchar('%', count);
	else
		ft_printchar(type, count);
}

int	ft_printf(const char *type, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, type);
	while (*type)
	{
		if (*type == '%')
		{
			type++;
			ft_checktype(args, *type, &count);
		}
		else
			ft_printchar(*type, &count);
		type++;
	}
	va_end(args);
	return (count);
}
/*

#include <stdio.h>

int	main()
{
	char *a1 = NULL;
	int	i;
	int	j;
	i = ft_printf("my str:%s\n",a1);
	j = printf("origin:%s\n",a1);
	printf("i = %d, j = %d\n",i,j);

	i = ft_printf("my str:%d\n",-2147483648);
	j = printf("origin:%ld\n",-2147483648);
	printf("i = %d, j = %d\n",i,j);

	i = ft_printf("my str:%p\n",&i);
	j = printf("origin:%p\n",&i);
	printf("i = %d, j = %d\n",i,j);
	return(0);

}*/
