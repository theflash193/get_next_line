/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 11:51:00 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/10 14:13:22 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include "stdlib.h"
#include <fcntl.h>

int main()
{
	char	*line;
	int		fd;
	int		ret;

	fd = open("jojo", O_RDONLY);
	while ((ret = get_next_line(fd, &line)))
	{
		ft_putendl("line :");
		ft_putendl(line);
		if (ret == -1)
		{
			ft_putendl("Error");
			exit(0);
		}
	}
	ft_putendl("c'est fini :");
	ft_putendl(line);
	return (0);
}
