#include "head.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	char *p;
	int len;

	len = 0;
	p = (char*)s1;
	while (*s1++ != 0)
		len++;
	s1 = p;
	p = (char*)s2;
	while (*s2++ != 0)
		len++;
	s2 = p;
	result = (char*)malloc(sizeof(char) * len);
	if (result == NULL)
		return (NULL);
	while (*s1 > 0)
		*result++ = *s1++;
	while (*s2 > 0)
		*result++ = *s2++;
	while (len-- > 0)
		result--;
	return (result);
}