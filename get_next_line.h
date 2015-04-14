/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:28:07 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/14 16:35:18 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE 
# define GET_NEXT_LINE
# define BUFF_SIZE 32
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>

int get_next_line(int const fd, char ** line);

#endif