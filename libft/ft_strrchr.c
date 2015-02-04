/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 13:03:07 by grass-kw          #+#    #+#             */
/*   Updated: 2015/01/28 16:52:56 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	while (l--)
	{
		if (c == *s)
			return ((char *)s);
		s--;
	}
	return (NULL);
}