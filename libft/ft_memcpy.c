/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:30:02 by grass-kw          #+#    #+#             */
/*   Updated: 2015/01/28 16:12:57 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;

	tmp_src = (char *) src;
	tmp_dst = (char *) dst;
	while (len--)
	{
		*tmp_src = *tmp_dst;
		tmp_src++;
		tmp_dst++;
	}
	return ((void *)tmp_dst);
}