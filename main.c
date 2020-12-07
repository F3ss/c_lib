#include "head.h"
#include <stdio.h>

int main(){
    char str[5] = "Hello";
    char *s;

    printf("Hello - %s\n",str);
    ft_bzero(str, 3);
    printf("000lo - %s\n",str);
    s = ft_memcpy(str, "qwe", 2);
    printf("qw0lo - %s\n", s);
    s = ft_memccpy(str, "Hello", 'l', 6);
    printf("He0lo - %s\n", s);
    s = ft_memset(str, 'l', 1);
    printf("le0lo - %s\n", s);
    s = ft_memmove(str, "Hel", 3);
    printf("Hello - %s\n", str);
    s = ft_memchr(str, 'l', 3);
    printf("Hello - %s\n", s);
    printf("1 - %d %s\n", ft_memcmp("Hewlo", "Herlo", 3), str);
    printf("5 - %d\n", (int)ft_strlen("Hewlo"));
    printf("2 %d\n", (int)ft_strlcpy(str, "qw", 1));
    printf("owin - %s\n", ft_strchr("Hellowin", 'o'));
    printf("lowine - %s\n", ft_strrchr("Hellowine", 'l'));
    printf("Hellw & win - %s\n", ft_strnstr("Hellw & win", "wi", 20));
    printf("1 - %d\n", ft_strncmp("ellw & win", "Hellw & win", 2));
    printf("123456789 - %d\n", ft_atoi("1234567890"));
    printf("atoi %d\n", atoi("-214748364922123"));
    printf("ft_atoi %d\n", ft_atoi("-214748364922123"));
    return (0);
}