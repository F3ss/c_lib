#include "head.h"
#include <stdio.h>

int main(){
    char str[5] = "Hello";
    char *c = "check";
    char *s;
    char *p;

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
    printf("1 %d\n", ft_isalpha('G'));
    printf("1 %d\n", ft_isdigit('0'));
    printf("1 %d\n", ft_isalnum('h'));
    printf("1 %d\n", ft_isascii('~'));
    printf("1 %d\n", ft_isprint('\t'));
    printf("1 %c\n", ft_toupper('a'));
    printf("1 %c\n", ft_tolower('Z'));
    
    s = ft_calloc(6, sizeof(char));
    p = s;
    while (*c != 0)
    {
        *s = *c;
        s++;
        c++;
    }
    s = p;
    printf("check %s\n", ft_strdup(s));
    printf("eck %s\n", ft_substr(s, 2, 3));
    printf("asd 3 %s\n", ft_strjoin("asd", " 3"));
    printf("sd %s\n", ft_strtrim("asdQWqweqwe", "sdQz"));
    char **sss = ft_split("qwe,SADASWQzxc,fdsfck", ',');
    int i = 0;
    while (i < 3)
    {
        printf("%s\n", sss[i]);
        i++;
    }
    printf("1234567890 %s\n", ft_itoa(2147483648));
    int fd;
    char *path = "/home/f3ss/Documents/example.txt";
    fd = open(path, O_CREAT | O_WRONLY, 0600);
    ft_putchar_fd('c', fd);

    return (0);
}