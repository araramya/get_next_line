/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:55:19 by araramya          #+#    #+#             */
/*   Updated: 2021/02/22 19:55:22 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
#include <stdio.h>

int			get_next_line(int fd, char **line);
int			ft_strlen(char *str);
char		*ft_strjoin(char *rem_line, char *buffer);
char		*ft_strnew(size_t size);
int			ft_str_endline(char *str);
char		*ft_remline(char *rem_line);
char		*ft_clearrem(char *rem_line);

#endif
