#include "head.h"

void *ft_memccpy (void *dest, const void *src, int c, size_t n)
{
    char *point;

    point = dest;
    while (*(char*)src != (char)c && n > 0)
    {
        *(char*)dest++ = *(char*)src++;
        n--;
    }
    return point;
}