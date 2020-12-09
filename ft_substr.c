#include "head.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
 
	str = (char*)malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*(s + start) != 0 && len > 0)
	{
		*str = *(s + start);
		start++;
		str++;
		len--;
	}
	str--;
	while (*(str - 1) != 0)
		str--;
	return (str);
}