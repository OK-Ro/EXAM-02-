#include <unistd.h>

typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *current;
	t_list *next_node;
	int swapped;
	int temp;

	if (!lst)
		return NULL;
	
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		current = lst;
		while (current && current->next)
		{
			next_node = current->next;
			if (!cmp(current->data, next_node->data))
			{
				temp = current->data;
				current->data = next_node->data;
				next_node->data = temp;
				swapped = 1;
			}
			current = current->next;
		}
		
	}
	return lst;
}