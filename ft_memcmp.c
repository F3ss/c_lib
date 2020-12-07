#include "head.h"

int ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
    while (n > 0) {
        if (*(char*)arr1 > *(char*)arr2)
            return (1);
        else if (*(char*)arr1 < *(char*)arr2)
            return (-1);
        n--;
        arr1++;
        arr2++;
    }
    return (0);
}
