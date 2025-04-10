/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:03:01 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/10 20:55:14 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *set_line(char *temp_line) {
    char *line;
    
    int i = 0;
    while (temp_line[i] && temp_line[i] != '\n') {
        i++;
    }
    line = ft_substr(temp_line, 0, i + 1);
    return (line);
}


char *get_temp_line(char *temp_line ,char *buf)
{
    char    *temp;
    if (!temp_line) 
        temp = ft_strdup(buf);
    else
    {   
        temp = ft_strjoin(temp_line, buf);
        free(temp_line); 
    }
    return (temp);
}
char    *get_gn_line(char *temp_line, char * line_buf)
{
    char * gn_line;
    if (ft_strchr(temp_line, '\n')) 
    {
        gn_line = set_line(temp_line);
        temp_line = ft_strdup(ft_strchr(temp_line, '\n') + 1);
        free(line_buf);
    }
    return (gn_line);
}

char *get_next_line(int fd) {
    char *gn_line;
    char *line_buf;
    static char *temp_line;
    ssize_t fd_read;
    
    line_buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
    {
        free(temp_line);
        free(line_buf);
        temp_line = NULL;
        return (NULL);
    }
    if (!line_buf)
        return(NULL);
    while ((fd_read = read(fd, line_buf, BUFFER_SIZE)) > 0) {
        line_buf[fd_read] = '\0';
        temp_line = get_temp_line(temp_line, line_buf);
        gn_line = get_gn_line(temp_line, line_buf);

    }
    if (fd_read == 0 && temp_line && *temp_line) {
        gn_line = ft_strdup(temp_line);
        free(temp_line);
        temp_line = NULL;
        free(line_buf);
        return gn_line;
    }
    free(line_buf);
    return NULL;
}