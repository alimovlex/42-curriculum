//
// Created by gyun on 2019-04-16.
//

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <iostream>
#include "gtest/gtest.h"
#include "get_next_line.h"

TEST(GNL, LINE_TEST)
{
    int		fd;
    char	*rslt;

    fd = open("test.txt", O_RDONLY);
    rslt = get_next_line(fd);
    if (rslt == nullptr)
        std::cout << "(null)" << std::endl;
    else
        std::cout << "line -> " << rslt << std::endl;
    //printf("line -> %s\n", rslt);
    free(rslt);
    close(fd);
    EXPECT_EQ(1+1, 2);
}

TEST(GNL, TEST)
{
    int		fd;
    char	*putito;

    fd = open("test.txt", O_RDONLY);
    putito = get_next_line(fd);
    while (putito)
    {
        std::cout << putito << std::endl;
        free(putito);
        putito = get_next_line(fd);
    }
    close(fd);
    EXPECT_EQ(1+1, 2);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
