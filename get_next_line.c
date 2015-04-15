/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/15 16:19:21 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	char	*ret;

	if (!s1 || !s2 || !(ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(ret, s1);
	ft_strncat(ret, s2, n);
	return (ret);
}

int get_next_line(int const fd, char **line)
{
	static char	buf[BUFF_SIZE + 1] = {0};
	int		ret;
	int		i;

	ft_strclr(*line);
	i = 0;
	ret = 1;
	if (fd < 0)
		return (-1);
	while (42) // tant que j'ai pas lu de ligne ou fini de lire dans le file descriptor 
	{
		i = 0;
		while (ret && buf[i]  != '\0' && buf[i] != '\n')
			i++;
		if (ret && buf[i] == '\n')
		{
			*line = ft_strnjoin(*line, buf, i);
			ft_memcpy(buf, buf + i + 1, BUFF_SIZE - i);
			return (1);
		}
		*line = ft_strjoin(*line, buf);
		if ((ret = read(fd, buf, BUFF_SIZE)))
			buf[BUFF_SIZE + 1] = '\0';
		if (ret <= 0)
			return (ret);
	}
}
