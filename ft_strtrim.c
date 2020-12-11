#include "head.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *result;
	int len;
	int r;

	len = 0;
	while(*s1 != 0)
	{
		while((*s1 == *set) && (*set != 0))
		{
			len++;
			s1++;
			set++;
		}
		if (*set == 0)
			break;
		while (*(set - 1) != 0)
		{
			len--;
			set--;		
		}
		s1++;
	}
	result = (char*)malloc(sizeof(char) * len);
	if (result == NULL || len == 0)
		return (NULL);
	r = len;
	while (len-- > 0)
		s1--;
	len = r;
	while (r-- > 0)
		*result++ = *s1++;
	*result = '\0';
	while (len-- > 0)
		result--;
	return (result);
}