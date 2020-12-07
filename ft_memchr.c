#include "head.h"

void *ft_memchr (const void *arr, int c, size_t n)
{
    while (*(char*)arr != 0 || *(char*)arr != c || n > 0)
    {
        if (*(char*)arr == c)
            return (char*)arr;
        arr++;
        n--;
    }
    return NULL;
}