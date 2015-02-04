/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/04 15:38:31 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int get_next_line(int const fd, char **line)
{
	static char	ret[BUFF_SIZE] = 0;
	static char	buf[BUFF_SIZE];

	if (fd < 0)
		return (-1);
	if (ft_strcmp(ret) == '\0')
	{
		*line = 
	}
	while (ret = read(ret, buf, BUFF_SIZE))
	{
		buf[ret] = '\0';
		ft_putendl(but);
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