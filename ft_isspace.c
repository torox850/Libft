/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:35:32 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/13 10:38:18 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return (c == '\t' | c == '\f' | c == '\v' | c == '\n' | c == '\r'
		| c == ' ');
}