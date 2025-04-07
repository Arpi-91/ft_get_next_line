/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:01:37 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/07 19:59:20 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    char *filename = "text.txt";
    int fd;
    //char *line;
    fd = open(filename, O_RDWR);
    if (fd ==-1)
    {
        printf("%s", "error");
    }
    // while (get_next_line(fd) != NULL)
    // {
    //      line = get_next_line(fd);
    //     printf("%s", get_next_line(fd));
    // }
    // printf("\n%s", get_next_line(fd));
    printf("final_line ******%s",get_next_line(fd));
    close(fd);
}