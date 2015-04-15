/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:33:27 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/15 12:58:45 by anonymous        ###   ########.fr       */
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
	if (fd < 0)
		return (-1);
	// ft_putendl("GET_NEXT_LINE :");
	// ft_putstr("stats :");
	// ft_putdata((void *)*line, "line", 1);
	// ft_putdata((void *)buf, "buf", 1);
	// sleep(2);
	while (42) // tant que j'ai pas lu de ligne ou fini de lire dans le file descriptor 
	{
		// ft_putendl("debut de la boucle");
		// ft_putstr("stats : ");
		// ft_putdata((void *)*line, "line", 1);
		// ft_putdata((void *)buf, "buf", 1);
		// sleep(2);
		if (buf[0] != '\0') // si mon buf a stocké des caractère lu
		{
			// ft_putdata(buf, "buf", 1);
			i = 0;
			while (buf[i] && buf[i] != '\n')
				i++;
			if (buf[i] == '\n')
			{
				*line = ft_strnjoin(*line, buf, i);
				ft_memcpy(buf, buf + i + 1, BUFF_SIZE - i);
				// ft_putendl("LIGNE DETECTER DANS LE BUFFER !");
				// ft_putdata((void *)*line, "line", 1);
				// ft_putdata(buf, "buf", 1);
				// sleep(2);
				// exit(0);
				return (1);
			}
			else
			{
				*line = ft_strjoin(*line, buf);
				// ft_putendl("PAS DE LIGNE DETECTER !");
				// ft_putstr("stats : ");
				// ft_putdata((void *)*line, "line", 1);
				// ft_putdata((void *)buf, "buf", 1);
				// sleep(2);
			}
			// ft_putdata(*line, "line", 1);
		}
		if ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[BUFF_SIZE + 1] = '\0';
			// ft_putendl("LECTURE DANS LE FILE DESCRIPTOR");
			// ft_putdata((void *)buf, "buf", 1);
			// sleep(1);
		}
		else if (ret < 0)
			return (-1);
		else
		{
			// ft_putendl("On a fini de lire dans le file descriptor");
			return (0);
		}
	}
}
