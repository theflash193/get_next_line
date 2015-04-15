/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:28:07 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/15 19:59:37 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE 
# define GET_NEXT_LINE
# define BUFF_SIZE 32
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>

typedef struct 	s_env
{
	int			i;
	int			ret;
}				t_env;

int 			get_next_line(int const fd, char ** line);
void			ft_putdata(void *data, char const *s, int mode);
char			*ft_strnjoin(char const *s1, char const *s2, size_t n);

#endif