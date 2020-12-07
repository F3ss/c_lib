#include "head.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    while(n > 0 && *str1 != 0 && *str2 != 0)
    {
        if (*str1 > *str2)
            return (1);
        else if (*str1 < *str2)
            return (-1);
        str1++;
        str2++;
    }
    return (0);
}