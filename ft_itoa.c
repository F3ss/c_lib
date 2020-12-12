#include "head.h"
#include <stdio.h>

int quad(int i)
{
	int a = i;
	i = 1;

	while (a > 0)
	{
		i *= 10;
		a--;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *result;
	int len = 0;
	int b = 0; 
	int c = n;
	long int w = n;
	long int a;	
	if (w < 0)
		w *= -1;
	a = w;
	if (n == 0)
		return ("0");
	while (a > 0)
	{
		len++;
		a /= 10;
	}
	result = (char*)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL); 
	if (c < 0)
		*result++ = '-';
	len--;		
	while (w >= 1)
	{
		*result++ = ((w / quad(len)) + '0');
		w %= quad(len);
		len--;
		b++;
	}
	while (b-- >= 0)
		result--;
	if (n >= 0)
		result++;
	return (result);
}