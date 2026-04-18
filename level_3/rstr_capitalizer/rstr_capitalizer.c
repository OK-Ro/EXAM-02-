#include <unistd.h>

int letter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;
	return c;
}

char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 32;
	return c;
}

int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}


int main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	if (argc >= 2)
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				c = argv[j][i];
				c = to_lower(c);
				if (letter(c) && is_delimiter(argv[j][i + 1]))
					c = to_upper(c);
				write (1, &c, 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
		
	}
	else
		write(1, "\n", 1);
	return 0;
}