#include "libft.h"
#include <stdio.h>

int main()
{
	char str[5] = "Hello";
	printf("%s\n", (char *)ft_memset(str, 'A', 3));
	printf("Hello, World!\n");
}
