#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int size = (start <= end)?(end - start + 1):(start - end + 1);
    int *arr;
    int i = 0;

    arr = malloc(sizeof(int *) * size);
    if (!arr)
        return NULL;;

    while (i < size)
    {
        if (start < end)
            arr[i] = start++;
        else
            arr[i] = start--;
        i++;
    }
    return arr;
}