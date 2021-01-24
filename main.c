#include "libft.h"
#include <stdio.h>

void f_memset()
{
	printf("\tMEMSET:\n");
	char str[5] = "Hello";
	printf("AAAlo == %s\n\n", (char *)ft_memset(str, 'A', 3));
}

void f_bzero()
{
	printf("\tBZERO:\n");
	char str[5] = "Hello";
	ft_bzero(str, 3);
	printf("Next string) %s\n\n", str);
}

int main()
{
	f_memset();
	f_bzero();
	printf("Hello, World!\n");
}
