#include "head.h"

char *ft_strrchr(const char *str, int c)
{
    char *point;

    point = NULL;
    while(*str != 0)
    {
        if (*str == c)
            point = (char*)str;
        str++;
    }
    return (point);
}