/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdata.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 22:54:12 by anonymous         #+#    #+#             */
/*   Updated: 2015/04/14 23:03:18 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_putdata(void *data, char const *s, int mode)
{
	ft_putstr(s);
	ft_pustr(" :")
	if (mode == 1)
		ft_putendl((char *)data);
	else if (mode == 2)
	{
		ft_putnbr((int)data);
		ft_putendl("");
	}
}