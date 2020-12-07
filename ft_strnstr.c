#include "head.h"

char *ft_strnstr(const char *strB, const char *strA, size_t len)
{
    char *p;
    char *re;

    re = (char*)strA;
    while(*strB != 0 && len > 0)
    {
        strA = re;
        if (*strB == *strA)
            p = (char*)strB;
        while (*strB == *strA)
        {
            strB++;
            strA++;
            if (*strA == 0)
                return p;
        }
        strB++;
        len--;
    }
    return NULL;
}