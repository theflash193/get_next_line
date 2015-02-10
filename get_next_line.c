/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/10 16:50:22 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int get_next_line(int const fd, char **line)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	static char	*res = "\0";
	int		i;

	ft_bzero(buf, BUFF_SIZE);
	if (fd < 0 || !*line)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[BUFF_SIZE] = '\0';
		*line = ft_strjoin(res, buf);
		*line = ft_strjoin(*line, buf);
		if (ft_strcmp(buf, "\n"))
		{
			i = ft_chr_index(buf, '\n');
			*line = ft_strsub(buf, 0, i);
			res = ft_strsub(buf, i, ft_strlen(buf) - (i + 1));
		}
	}
	if (ret > 0)
		return (1);
	if (ret == 0)
		return (0);
	return (0);
}
