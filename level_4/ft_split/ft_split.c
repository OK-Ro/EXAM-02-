#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}


char	**ft_split(char *str)
{
	int i = 0;
	int word = 0;
	int letter;
	char **res = malloc(sizeof(char *)*1000);

	while (str[i])
	{
		while (str[i] && is_space(str[i]))
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