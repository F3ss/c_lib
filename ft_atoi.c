#include "head.h"

int elevate(int x)
{
    int y;
    
    y = 1;
    while(x > 1)
    {
        y *= 10;
        x--;
    }
    return (y);
}

int ft_atoi (const char *str)
{
    int result;
    int index;
    char *p;

    p = (char*)str;
    index = 0;
    result = 0;
    while (*str != 0)
    {
        str++;
        index++;
    }
    str = p;
    if (*p == '-')
    {
        index--;
        str++;
    }
    index = elevate(index);
    while(*str != 0)
    {
        result += (*str - '0') * index;
        str++;
        index /= 10;
    }
    if (*p == '-')
        result *= -1;

    return (result);
}