#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		char *str;

		str = argv[1];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'z' - (str[i] - 'a');
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = 'Z' - (str[i] - 'A');
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
}