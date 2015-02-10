/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:28:07 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/10 13:19:43 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE 
# define GET_NEXT_LINE
# define BUFF_SIZE 32
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

int get_next_line(int const fd, char ** line);

#endif