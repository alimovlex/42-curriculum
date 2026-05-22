/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: alalimov <alalimov@student.codam.nl>          +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/10/14 12:39:58 by alalimov       #+#    #+#                */
/*   Updated: 2025/10/14 12:40:00 by alalimov       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#define Log(fmt, ...) \
    printf("[%s] [%s] [Line %d]: " fmt "\n", __FILE_NAME__, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

void test()
{
    int		fd;
    char	*putito;

    fd = open("test.txt", O_RDONLY);
    putito = get_next_line(fd);
    while (putito)
    {
        Log("line -> %s", putito);
        free(putito);
        putito = get_next_line(fd);
    }
    close(fd);
}

int main(int argc, char** argv)
{
    test();
    return 0;
}
