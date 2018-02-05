/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:59:35 by aguerin           #+#    #+#             */
/*   Updated: 2018/02/02 16:16:10 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print(const char *format, va_list va)
{
	int	i;
	int	begin;
	int	cmp;
	int ret;

	i = -1;
	cmp = 0;
	begin = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			cmp += ag_putnstr(&format[begin], i - begin);
			if ((ret = find_conversion(&format[i], va, &cmp)) == -1)
				return (-1);
			i += ret;
			begin = i + 1;
		}
	}
	if (begin != i)
		cmp += ag_putnstr(&format[begin], i - begin);
	return (cmp);
}

int			ft_printf(const char *format, ...)
{
	va_list	va;
	int		ret;

	if (!format)
		return (-1);
	va_start(va, format);
	ret = print(format, va);
	va_end(va);
	return (ret);
}
