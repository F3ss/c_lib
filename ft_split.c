#include "head.h"

size_t slen (const char *str, char c)
{
    size_t result;

    result = 0;
    while(*str != 0 && *str != c)
    {
        str++;
        result++;
    }
    return (result);
}

int quantityStrings(char const *s, char c)
{
	int result;

	result = 0;
	while (*s++ != 0)
		if (*s == c)
			result++;
	return (++result);
}

char **ft_split(char const *s, char c)
{
	int qStr = quantityStrings(s, c);
	int index = 0;
	int b = 0;
	char **result;

	result = (char**)malloc(sizeof(char*) * qStr);
	while(qStr > 0 && *s != 0)
	{
		result[index] = (char*)malloc(sizeof(char) * (slen(s, c) + 1));
		if (result[index] == NULL)
		{
			while (index >= 0)
			{
				free(result[index]);
				index--;
			}
			free(result);
			return (NULL);
		}
		while (*s != 0 && *s != c)
		{
			*result[index]++ = *s++;
			b++;
		}
		if (index > 0)
			b++;
		while (b-- > 0)
			result[index]--;
		index++;
		s++;
		qStr--;
	}
	return (result);
}