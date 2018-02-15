/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putll.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mmoya <mmoya@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/15 21:06:03 by mmoya        #+#   ##    ##    #+#       */
/*   Updated: 2018/02/15 21:06:15 by mmoya       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putll(long long l)
{
	char c;

	c = '0';
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	if (l > 9)
	{
		ft_putll((l / 10));
		c += l % 10;
		write(1, &c, 1);
	}
	else
	{
		c += l;
		write(1, &c, 1);
	}
}