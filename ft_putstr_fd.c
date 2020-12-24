#include "head.h"

void ft_putstr_fd(char *s, int fd)
{
    char *p;
    int len;

    len = 0;
    p = s;
    while(*s++ != 0)
        len++;
    s = p;
    write(fd, s, len);
}