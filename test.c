/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:01:37 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/08 18:20:16 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    char *filename = "files/alternate_line_nl_no_nl.txt";
    int fd;
    char *line;
    fd = open(filename, O_RDWR);
    if (fd ==-1)
    {
        printf("%s", "error");
    }
    while ((line = get_next_line(fd)) != NULL)
    {
         //line = get_next_line(fd);
         printf("final_line ******%s",line);
      //  printf("%s", get_next_line(fd));
    }
    //printf("\n%s", get_next_line(fd));
    close(fd);
}