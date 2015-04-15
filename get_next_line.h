/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:28:07 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/15 16:10:05 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE 
# define GET_NEXT_LINE
# define BUFF_SIZE 2
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>

int 	get_next_line(int const fd, char ** line);
void	ft_putdata(void *data, char const *s, int mode);

#endif