#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int new_word;
	char c;
	
	if (argc >= 2)
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			new_word = 1;
			while (argv[j][i])
			{
				c = argv[j][i];
				if (c == ' ' || c == '\t')
					new_word = 1;
				else
				{
					if (new_word && c >= 'a' && c <= 'z')
						c -= 32;
					else if (!new_word && c >= 'A' && c <= 'Z')
						c += 32;
					new_word = 0;
				}
				write(1, &c, 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
		else
		write(1, "\n", 1);
	return 0;
}