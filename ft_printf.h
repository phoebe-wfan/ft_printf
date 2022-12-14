/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:29:55 by wfan              #+#    #+#             */
/*   Updated: 2022/12/11 19:14:05 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_printchar(char c, int *count);
void	ft_printstr(const char *s, int *count);
void	ft_printnbr(int nbr, int *count);
void	ft_printabs(unsigned int nbr, int *count);
void	ft_printnbr_base16(unsigned int nbr, char type, int *count);
void	ft_printmem(const void *ptr, int *count);
int		ft_printf(const char *type, ...);

#endif
