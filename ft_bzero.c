#include "head.h"

void ft_bzero(void *s, size_t n)
{
    while (*(char*)s != 0 && n > 0)
    {
        *(char*)s = '0';
        n--;
        s++;
    }
}