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
#include "libft.h"
#include "ft_printf.h"
#define Log(fmt, ...) \
    ft_printf("[%s] [%s] [Line %d]: " fmt "\n", __FILE_NAME__, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

static void to_upper(unsigned int i, char *c)
{
    (void)i;
    *c = (char)ft_toupper((unsigned char)*c);
}

void test()
{
    char test_str[] = "hello world!";
    int *arr = (int*)ft_calloc(5, 5);
    char const *src = "  foo,,bar,baz  ";
    char delim = ',';
    Log("arr address %p", arr);
    free(arr);
    int num = 42;
    char *str = ft_itoa(num);
    Log("itoa str = %s", str);
    void *ptr = ft_memchr(str, 50, 2);
    Log("the address of '2' symbol in a %s string is %p", (unsigned char*)ptr, ptr);
    int result = ft_memcmp(&num, str, 2);
    Log("the result of comparison %d and %s = %d", num, str, result);
    (int*)ft_memcpy(&num, str, 2);
    Log("New value of num after memmove = %d", num);
    (int*)ft_memmove(&num, str, 2);
    Log("New value of num after memmove = %d", num);
    str = (char*)ft_memset(&num, 52, 2);
    Log("New value of str after memset = %s", str);
    char **str_arr = ft_split(src, delim);
    Log("The array of delimited strings after ft_split:");
    while(*str_arr)
    {
        Log("%s", *(str_arr));
        str_arr++;
    }
    char* str_dup = ft_strdup(str);
    Log("String clone is: %s", str_dup);
    ft_striteri(test_str, to_upper);
    Log("Applied uppercase to string: %s", test_str);
}

int main(int argc, char** argv)
{
    test();
    return 0;
}
