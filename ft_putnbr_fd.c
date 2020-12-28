#include "head.h"

void ft_putnbr_fd(int n, int fd)
{
    int len;
    char *p;
    char *nbr;

    len = 0;
    nbr = (char *)malloc(sizeof(char) * 11);
    nbr = ft_itoa(n);
    p = nbr;
    write(1, nbr, 10);
    while(*nbr++ != 0)
        len++;
    nbr = p;
    write(fd, nbr, len);
}