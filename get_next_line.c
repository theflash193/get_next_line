/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/14 23:05:45 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int get_next_line(int const fd, char **line)
{
	static char	buf[BUFF_SIZE + 1] = {0};
	int		ret;
	int		i;
	(void)line;

	(void)i;
	i = 0;
	while (42) // tant que j'ai pas lu de ligne ou fini de lire dans le file descriptor 
	{
		if (buf[0] != '\0') // si mon buf a stocké des caractère lu
		{
			while (buf[i] && buf[i] != '\n')
				i++;
			if (buf[i] == '\n')
			{

				line = ft_strjoin(line, ft_strsub(buf, buf[0], i));
				ft_strsub(buf, i + 1, ft_strlen(buf) - 1);
				return (1);
			}
			else
				line = ft_strjoin(line, buf);
		}
		if ((ret = read(fd, buf, BUFF_SIZE)))
			buf[BUFF_SIZE + 1] = '\0';
		else if (ret < 0)
			return (-1);
		else
			return (0);
	}
}
