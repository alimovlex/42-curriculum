//
// Created by gyun on 2019-04-16.
//

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include "gtest/gtest.h"
#include "libft.h"

TEST(ATOI_TEST, TEST)
{
    EXPECT_EQ(ft_atoi("--1996"), atoi("--1996"));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
