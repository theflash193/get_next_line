/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/14 22:44:48 by anonymous        ###   ########.fr       */
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
			ft_putstr("buf :");
			ft_putendl(buf);
			while (buf[i] && buf[i] != '\n')
				i++;
			if (buf[i] == '\n')
			{
				line = ft_strjoin(line, ft_strsub(buf, buf[0], i));
				
				return (1);
			}
		// je cherche sinon il y a un backslash /n dans mon buffer
		// si il n'y en a pas je join ma line et mon buffer
		// si j'ai un backslash /n j'ai un strsub sinon je fais un strjoin
		// si j'ai trouvé un backslash /n j'ai lu une ligne je quite le programme
		}
		if ((ret = read(fd, buf, BUFF_SIZE)))
			buf[BUFF_SIZE + 1] = '\0';
		else if (ret < 0)
			return (-1);
		else
			return (0);
	}
}
