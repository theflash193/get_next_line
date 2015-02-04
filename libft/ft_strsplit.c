/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:29:49 by grass-kw          #+#    #+#             */
/*   Updated: 2015/01/28 17:04:40 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	   ft_count(char const *s, char c)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (i != j)
			count++;
	}
	return (count);
}                                                                                                                                                                                                                                                                                                                                                                                                      

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int 	start;

	i = 0;
	j = 0;
	if (!(tab = (char **) ft_memalloc(ft_count(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i != start)
		{
			tab[j] = ft_strsub(s, start, i - start);
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}