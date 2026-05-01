#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
    t_list *temp;
    t_list *current;

    prev = NULL;
    current = *begin_list;
    while (current)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    *begin_list = prev;
}
