#include "libfdt.h"

int ft_lstsize(t_list *lst)
{
	int result;

	result = 0;
	while (lst != NULL)
	{
		result++;
		lst = lst->next;
	}
	return (result);
}
