#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *new_dup;
	int i = 0;
	int len = 0;

	while (src[len])
		len++;
	new_dup = malloc(len +1);
	if (!new_dup)
		return NULL;
	while (src[i])
	{
		new_dup[i] = src[i];
		i++;
	}
	new_dup[i] = '\0';
	return (new_dup);
}