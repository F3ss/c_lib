#include "libfdt.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p1;

	p1 = *lst;
	while (p1->next != NULL)
		p1 = p1->next;
	p1->next = new;
}
