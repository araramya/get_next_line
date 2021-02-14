/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:29:47 by araramya          #+#    #+#             */
/*   Updated: 2021/02/14 14:29:52 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)// 1, 0 , -1
{
  char          *buffer;
  static char   readed_bytes;

  if (line == NULL, BUFFER_SIZE <= 0 || line == NULL)
    return (-1);
  if (!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
    return (-1);
    while ((readed_bytes = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[readed_bytes] = '\0';
         
    }
}


int main()
{
    char *line;
    char fd;

    fd = open("text.txt", O_RDONLY);
}