#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i;;
	int max_results;

	if (len == 0)
		return 0;
	max_results = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > max_results)
			max_results = tab[i];
		i++;
	}
	return max_results;
}