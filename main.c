#include "head.h"
#include "libfdt.h"
#include <stdio.h>

int main()
{
    t_list *res;
    t_list *res1;
    t_list *res2;
    t_list *res3;
    t_list **arr;
    res = ft_lstnew("Rabotaet!xD");
    res1 = ft_lstnew("I hope this string is first...");
    res3 = ft_lstnew("add_BACK.");
	arr = &res;
    printf("%s\n", (char *)res->content);
	ft_lstadd_front(arr, res1);
	ft_lstadd_back(arr, res3);
	res2 = *arr; 
	while (res2 != NULL)
	{
		printf("%s\n", (char *)res2->content);
		res2 = res2->next;
	}
	res2 = *arr;
	printf("%d \n", ft_lstsize(res2));
	printf("%s \1n", (char *)ft_lstlast(res2)->content);
	printf("AAAAAAAAAAAAA\n");
    return (0);
}
