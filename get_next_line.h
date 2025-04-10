/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:04:32 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/05 18:14:41 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     GETNEXTLINE_H
# define    GETNEXTLINE_H
// #ifndef BUFFER_SIZE
// # define    BUFFER_SIZE

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char    *get_next_line(int fd);
char    *set_line(char  *temp_line);
char	*ft_strchr(const char *c, int ch);
int     ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strcpy(char *dest, char *src);
char    *get_temp_line(char *temp_line ,char *buf);
char    *get_gn_line(char *temp_line, char * line_buf);


#endif