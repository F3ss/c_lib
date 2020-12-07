#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy (void *destination, const void *source, int c, size_t n);
void *ft_memmove (void *dest, const void *src, size_t n);
void *ft_memchr (const void *arr, int c, size_t n);
int ft_memcmp (const void *arr1, const void *arr2, size_t n);
size_t ft_strlen (const char *str);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
size_t strlcat(char * restrict dst, const char * restrict src, size_t size);
char *ft_strchr (const char *str, int ch);
char *ft_strrchr(const char *str, int c);
char *ft_strnstr(const char *strB, const char *strA, size_t len);
int ft_strncmp(const char *str1, const char *str2, size_t n);
int ft_atoi (const char *str);
