#include "libfdt.h"

t_list *ft_lstlast(t_list *lst)
{
	if (lst->next == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
