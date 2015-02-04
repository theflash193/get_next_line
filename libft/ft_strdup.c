/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 14:31:02 by grass-kw          #+#    #+#             */
/*   Updated: 2015/01/22 14:45:22 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *ret;
	size_t	l;

	l = ft_strlen(s1);
	if(!(ret = (char *)malloc(sizeof(s1) * (l + 1))))
		return (NULL);
	ft_memcpy(ret, s1, l);
	ret[l] = '\0';
	return (ret);
}