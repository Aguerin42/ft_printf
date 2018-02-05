/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:00:56 by aguerin           #+#    #+#             */
/*   Updated: 2018/02/02 15:50:04 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print(int width, int specifier[])
{
	int	cmp;

	cmp = 0;
	if (!specifier[3])
		cmp += ft_putnchar((specifier[1] ? '0' : ' '), width - 1);
	cmp += ft_putchar('%');
	if (specifier[3])
		cmp += ft_putnchar(' ', width - 1);
	return (cmp);
}

int			conversion_percent(const char *format, int *cmp)
{
	int	width;
	int	specifier[6];

	width = 0;
	find(format, specifier, &width, NULL);
	correction_specifier(specifier, 1, 0, 0);
	*cmp += print(width, specifier);
	return (1);
}
