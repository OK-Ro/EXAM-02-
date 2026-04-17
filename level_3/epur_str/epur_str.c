#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int first = 1;
	char *str;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			if (str[i])
			{
				if (!first)
					write(1, " ", 1);
				first = 0;
				while (str[i] && str[i] != ' ' && str[i] != '\t')
				{
					write(1, &str[i], 1);
					i++;
				}
				
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}