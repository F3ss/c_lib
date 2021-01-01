#include "head.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (NULL == str)
		return (NULL);
	i = 0;
	str[len] = '\0';
	while (i < len)
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}