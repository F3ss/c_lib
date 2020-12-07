#include "head.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
    int result;

    result = 0;
    if (dst == NULL || src == NULL)
        return (0);
    while ((int)size < result && src[result] != 0)
    {
        dst[result] = src[result];
        result++;
    }
    while(src[result] != 0)
        result++;
    return (result);
}