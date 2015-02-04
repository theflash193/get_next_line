/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 14:46:23 by grass-kw          #+#    #+#             */
/*   Updated: 2015/01/26 16:50:33 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	l;

	l = ft_strlen(src);
	while (l--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	dst[l] = '\0';
	return (dst);
}