/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:01:37 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/06 17:11:30 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    char *filename = "text.txt";
    int fd;
    fd = open(filename, O_RDWR);
    if (fd ==-1)
    {
        printf("%s", "error");
    }
    else
    {
        printf("%s",get_next_line(fd));
    }
    close(fd);
}