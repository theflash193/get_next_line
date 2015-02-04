/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/04 16:47:02 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int get_next_line(int const fd, char **line)
{
	int			ret;
	static char	buf[BUFF_SIZE + 1];
	static char	res[BUFF_SIZE] = 0;

	if (fd < 0)
		return (-1);
	while (ret = read(fd, buf, BUFF_SIZE))
	{
		buf[ret] = '\0';
		if (ft_strchr(buf, '\n'))
			ft
		ft_putendl(buf);
		if (ft_strcmp(ret, "\0"))
			*line = ft_strjoin(ret, buf);
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	int 	fd;
	char	*line;

	fd = open("jojo", O_RDONLY);
	while (get_next_line(fd, &line))
	return (0);
}