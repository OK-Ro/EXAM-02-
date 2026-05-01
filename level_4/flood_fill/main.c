#include <stdlib.h>

// typedef struct  s_point
// {
//     int x; 
//     int y; 
// }   t_point;

// void fill(char **tab, t_point size, int x, int y, char target)
// {
//     if (x < 0 || y < 0 || x >= size.x || y >= size.y)
//         return;
    
//     if (tab[y][x] != target)
//         return;
//     tab[y][x] = 'F';

//     fill(tab, size, x, y + 1, target);
//     fill(tab, size, x, y - 1, target);
//     fill(tab, size, x + 1, y, target);
//     fill(tab, size, x - 1, y, target);
// }

// void flood_fill(char **tab, t_point size, t_point begin)
// {
//     char target = tab[begin.y][begin.x];

//     fill(tab, size, begin.x, begin.y, target);
// }


// #include <stdlib.h>


typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;



// #include <stdlib.h>

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// {
//     t_list *   current;

//     if (!begin_list || !*begin_list);
//         return;
//     current = *begin_list;
//     if (cmp(current->data, data_ref) == 0)
//     {
//         *begin_list = current->next;
//         free(current);
//         ft_list_remove_if(begin_list, data_ref, cmp);
//     }
//     else
//         ft_list_remove_if(&current->next, data_ref, cmp);
// }


// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
//     t_list *current;
//     t_list *next_node;
//     int temp;
//     int swapped = 1;

//     if (!lst)
//         return NULL;
//     while (swapped)
//     {
//         swapped = 0;
//         current = lst;
//         while (current && current->next)
//         {
//             next_node = current->next;
//             if (!cmp(current->data, next_node->data))
//             {
//                 temp = current->data;
//                 current->data = next_node->data;
//                 next_node->data = temp;
//                 swapped = 1;
//             }
//             current = current->next;
//         }
        
//     }
//     return swapped;
// }

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

char	**ft_split(char *str)
{
    int i = 0;
    int word = 0;
    int letter;
    char **res = malloc(sizeof(int) * 1000);

    while (str[i])
    {
        if (str[i] && is_space(str[i]))
            i++;
        if (!str[i])
            break;
        res[word] = malloc(1000);
        letter = 0;
        while (str[i] && !is_space(str[i]))
        {
            res[word][letter] = str[i];
            letter++;
            i++;
        }
        res[word][letter] = '\0';
        word++;
    }
    res[word] = NULL;
    return res;
}


#include <stdio.h>

char	**ft_split(char *str);

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
		i = 0;
		while (split[i])
		{
			printf("[%s]\n", split[i]);
			i++;
		}
	}
	printf("\n");
	return (0);
}