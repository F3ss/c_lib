#ifndef __LIBFDT_H__
#define __LIBFDT_H__

#include <stdlib.h>

typedef struct          s_list
{
        void            *content;
        struct s_list   *next;
}                       t_list;

t_list *ft_lstnew(void *content);

#endif


