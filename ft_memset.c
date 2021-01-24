#include "libft.h"

void *ft_memset (void *dest, int c, size_t n)
{
	void *p = dest;
	while(n-- > 0)
	{
		*(char *)dest = c;
		dest++;
	}
	return(p);
}
