/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:03:01 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/07 20:02:26 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char *fill_temp_line()
// {
//     static char* tempft_strdup_line;

    
    
// }

char *set_line(char * temp_line)
{
    char *line;
    int i;
    int len;
    
    i = 0;
    
    while(temp_line[i])
    {
        if(temp_line[i] == '\n')
        {
            break;
        }
        i++;
    }
    printf("%d\n", i);
    len = ft_strlen(temp_line) - i;


    line = ft_substr(temp_line, 0, len);
    printf("gnl ---->%s->", line);
    return (line);
}

char *get_next_line(int fd)
{
    char *gn_line;
    char *line_buf;
    static char *temp_line;
    ssize_t fd_read;

    line_buf = (char *)malloc(BUFFER_SIZE + 1);
    //free(line_buf);
    
    
    
    while((fd_read = read(fd, line_buf, BUFFER_SIZE)) >0)
    {
        //printf("%s\n", line_buf);
        line_buf[fd_read] = '\0';
        if(!temp_line)
        {
            temp_line = ft_strdup(line_buf);
            if(ft_strchr(temp_line, '\n'))
            {
                gn_line = set_line(temp_line);
                temp_line = ft_strchr(temp_line, '\n');
            }
        }
        else
        {
            temp_line = ft_strjoin(temp_line, line_buf);
            //free(line_buf);
        }
        if (line_buf[fd_read - 1] == '\n') {
            break;
        }
    }
    if (fd < 0 || BUFFER_SIZE <= 0 || fd_read == -1)
    {
        free(line_buf);
        gn_line = NULL;
        return (NULL);
    }
    printf("temp ---->>>> %s", temp_line);
    // printf("%s", line_buf);
    if(!gn_line)
    {
        gn_line = ft_strdup(temp_line);
    }
    return (gn_line);
}
