/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ltoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mmoya <mmoya@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/24 16:08:44 by mmoya        #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 17:05:10 by mmoya       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_ltoa(long n)
{
	char    *r;
	int     i;

	i = ft_countdigit(n) + (n < 0 ? 1 : 0);
	if (n == 0)
		return (ft_strdup("0"));
	r = ft_strnew(i--);
	if (n < 0)
	{
		r[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		r[i--] = n % 10 + '0';
		n /= 10;
	}
	return (r);
}