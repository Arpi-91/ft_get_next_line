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



#endif