/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 14:55:07 by grass-kw          #+#    #+#             */
/*   Updated: 2015/01/28 16:09:55 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	l;
	int		diff;

	l = ft_strlen(src);
	if (l > n)
	{
		diff = l - n;
		while (n--)
		{
			*dst = *src;
			src++;
			dst++;
		}
		while (diff--)
		{
			*dst = '\0';
			dst++;
		}
		return (dst);
	}
	return (dst);
}