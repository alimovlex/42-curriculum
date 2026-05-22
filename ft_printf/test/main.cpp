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

TEST(BZERO_TEST, TEST)
{
    int i;
    i = 0;
    char str[5] = "1234";
    ft_bzero(str, 4);
    std::cout << str << std::endl;
    while(str[i] != '\0')
    {
        EXPECT_TRUE(str[i] == '0');
        i++;
    }
}

TEST(IS_ALNUM_TEST, TEST)
{
    char c = '\0';
    EXPECT_EQ(ft_isalnum(c), isalnum(c));
}

TEST(IS_ALPHA, TEST)
{
    char c = '1';
    EXPECT_EQ(ft_isalpha(c), isalpha(c));
    c = '\0';
    EXPECT_EQ(ft_isalpha(c), isalpha(c));
}

TEST(IS_ASCII, TEST)
{
    char c = '1';
    EXPECT_EQ(ft_isascii(c), isascii(c));
    c = '\0';
    EXPECT_EQ(ft_isascii(c), isascii(c));
}

TEST(IS_DIGIT, TEST)
{
    char c = 'A';
    EXPECT_EQ(ft_isdigit(1), isdigit(1));
    EXPECT_EQ(ft_isdigit(c), isdigit(c));
    c = '\0';
    EXPECT_EQ(ft_isdigit(c), isdigit(c));
}

TEST(IS_PRINTF, TEST)
{
    char c = '\0';
    EXPECT_EQ(ft_isprint(c), isprint(c));
}

TEST(MEMCHR, TEST)
{
    char str[10000] = "Hello, friend.";
    EXPECT_EQ((char *)ft_memchr(str, 'r', 20), (char *)memchr(str, 'r', 20));
}

TEST(MEMCMP, TEST)
{
    EXPECT_EQ(ft_memcmp("bsae", "bsea", 5), memcmp("bsae", "bsea", 5));
}

TEST(MEMCPY, TEST)
{
    char str[] = "string";
    EXPECT_EQ((char *)ft_memcpy(str, "print", 3), (char *)memcpy(str, "print", 3));
}

TEST(MEMMOVE, TEST)
{
    char	destination[25] = "no";
    char	source[25] = "no size specified";
    EXPECT_EQ((char*)ft_memmove(destination, source, 10), (char*)memmove(destination, source, 10));
}

TEST(MEMSET, TEST)
{
    char    str[100];
    EXPECT_EQ(ft_memset(str, '3', 10), memset(str, '3', 10));
}

TEST(STRCHR, TEST)
{
    EXPECT_EQ(ft_strchr("Hello", 'l'), strchr("Hello", 'l'));
}
/*
TEST(STRLCAT, TEST)
{
    char dest[] = "striy";
    char sourc[] = "stroy";
    EXPECT_EQ(ft_strlcat(dest, sourc, 15), strlcat(dest, sourc, 15));
}

TEST(STRLCPY, TEST)
{
    char str[] = "stasssm";
    char str2[] = "timssadag";
    EXPECT_EQ(ft_strlcpy(str, str2, 9), strlcpy(str, str2, 9));
}
TEST(STRNCMP, TEST)
{
    EXPECT_EQ(ft_strncmp("cers", "ciiera", 8), strncmp("cers", "ciiera", 8));
}
TEST(STRDUP, TEST)
{
    EXPECT_EQ(ft_strdup("Hello"), strdup("Hello"));
}
*/
TEST(STRLEN, TEST)
{
    EXPECT_EQ(ft_strlen("123"), strlen("123"));
}

TEST(STRRCHR, TEST)
{
    EXPECT_EQ(ft_strrchr("Hello", 'o'), strrchr("Hello", 'o'));
}

TEST(TOLOWER, TEST)
{
    EXPECT_EQ(ft_tolower('A'), tolower('A'));
}

TEST(TOUPPER, TEST)
{
    EXPECT_EQ(ft_toupper('a'), toupper('a'));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
