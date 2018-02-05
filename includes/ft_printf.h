/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:55:45 by aguerin           #+#    #+#             */
/*   Updated: 2018/02/02 16:32:13 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "libag.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>
# include <inttypes.h>

int				ft_printf(const char *format, ...);
int				find_conversion(const char *format, va_list va, int *cmp);
int				find(const char *format, int spec[], int *width, int *prec);
int				find_length_modifier(const char *format);
long long		length_modifier_di(int modifier, va_list va);
long long		length_modifier_dou_cap(int modifier, va_list va);
unsigned long	length_modifier_oux(int modifier, va_list va);
void			correction_specifier(int specifier[], int nb, int ox, int d);
int				adjust(int *width, int *prec, const char *out, int spec[]);
int				wadjust(int *width, wchar_t *out, int spec[]);
int				print_r(const char *out, int width, int prec, int spec[]);
int				ft_putnchar(char c, int x);
int				ft_strwbytlen(wchar_t *str);
int				ft_charwbytlen(wchar_t c);
unsigned long	ft_strwlen(wchar_t *str);
char			*ft_itoa_long(long long n);

/*
** conversions
*/

int				conversion_s(const char *format, va_list va, int *cmp);
int				conversion_s_cap(const char *format, va_list va, int *cmp);
int				conversion_p(const char *format, va_list va, int *cmp);
int				conversion_d(const char *format, va_list va, int *cmp, char c);
int				conversion_o(const char *format, va_list va, int *cmp, char c);
int				conversion_u(const char *format, va_list va, int *cmp, char c);
int				conversion_x(const char *format, va_list va, int *cmp, char c);
int				conversion_c(const char *format, va_list va, int *cmp);
int				conversion_c_cap(const char *format, va_list va, int *cmp);
int				conversion_percent(const char *format, int *cmp);

/*
**	put
*/

int				ft_putwchar(long c);
int				ft_putwcharl(long c);
int				ft_putwchars(long c);
int				ft_putwnchar(wchar_t *str, unsigned int n);
int				ft_putwendl(wchar_t *str);
int				ft_putwstr(wchar_t *str);
int				ft_putwstrs(wchar_t *str);
int				ft_putxwchar(wchar_t c, int x);

#endif
