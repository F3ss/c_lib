#include "head.h"

void ft_putendl_fd(char *s, int fd)
{
    char *p;
    int len;

    len = 0;
    p = s;
    while(*s++ != 0)
        len++;
    s = p;
    write(fd, "\n", 1);
    write(fd, s, len);
}