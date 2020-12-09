#include "head.h"

char *ft_strdup(const char *s)
{
	char *p;
	int i;
	int len;

	len = 0;
	i = 0;
	p = (char*)s;
	while(*s++ != 0)
		len++;
	s = p;
	p = (char*)malloc(len * sizeof(char));
	while(*s != 0)
	{
		*(p + i) = *((char*)s);
		i++;
		s++;
	}
	return (p);
}