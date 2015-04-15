/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/15 20:04:55 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static int	get_next_line2(int const fd, char **line, t_env *e)
{
	static char	buf[BUFF_SIZE + 1] = {0};

	ft_strclr(*line);
	while (42) // tant que j'ai pas lu de ligne ou fini de lire dans le file descriptor 
	{
		e->i = 0;
		while (e->ret && buf[e->i]  != '\0' && buf[e->i] != '\n')
			e->i++;
		if (e->ret && buf[e->i] == '\n')
		{
			*line = ft_strnjoin(*line, buf, e->i);
			ft_memcpy(buf, buf + e->i + 1, BUFF_SIZE - e->i);
			return (1);
		}
		*line = ft_strjoin(*line, buf);
		if ((e->ret = read(fd, buf, BUFF_SIZE)))
			buf[BUFF_SIZE + 1] = '\0';
		if (e->ret <= 0)
		{
			if (ft_strequ(buf, ""))
				return (0);
			ft_bzero(buf, BUFF_SIZE);
			return (1);
		}
	}
}

int			get_next_line(int const fd, char **line)
{
	t_env e;

	e.i = 0;
	e.ret = 1;
	if (fd < 0)
		return (-1);
	return (get_next_line2(fd, line, &e));
}
