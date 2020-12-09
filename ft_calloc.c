#include "head.h"

void *ft_calloc(size_t number, size_t size)
{
	 void *p;
	 int i;

	 i = 0;
	 p = malloc(number * size);
	 
	 if (p == NULL)
	 	return (NULL);
	 while (i < (int)number)
	 {
	 	*((char*)p + i) = 0;
	 	i++;
	 }
	 
	 return (p);
}