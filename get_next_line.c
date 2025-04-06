/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:03:01 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/06 17:11:15 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *fill_temp_line()
{
    static char* temp_line;

    
    
}

char *get_next_line(int fd)
{
    char *gn_line;
    char *line_buf;
    static char *temp_line;
    ssize_t fd_read;
    printf("%d", BUFFER_SIZE);
    printf("%d\n", fd);

    line_buf = (char *)malloc(BUFFER_SIZE + 1);
    
    fd_read = read(fd, line_buf, BUFFER_SIZE);
    line_buf[BUFFER_SIZE] = '\0';
    if (fd < 0 || BUFFER_SIZE <= 0 || fd_read == -1)
        return (NULL);
    else
    {
        if(!temp_line)
            temp_line = 
        
        free(line_buf);
    }
    return (gn_line);
}