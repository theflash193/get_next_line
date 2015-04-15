/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 11:51:00 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/15 16:17:49 by anonymous        ###   ########.fr       */
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

	line = NULL;
	line = ft_strnew(1);
	// ft_putendl(line);
	// sleep(2);
	fd = open("jojo", O_RDONLY);
	while ((ret = get_next_line(fd, &line)))
	{
		// ft_putdata((void *)ret, "line", 2);
		ft_putendl("AFFICHAGE DE MA LIGNE");
		ft_putdata((void *)line, "line", 1);
	}
	// ft_putendl(line);
	return (0);
}
