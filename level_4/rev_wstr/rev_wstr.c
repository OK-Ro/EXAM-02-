#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;
	char *str;

	if (argc == 2)
	{
		str = argv[1];

		while (str[i])
			i++;
		i--; // go to last char

		while (i >= 0)
		{
			/* skip spaces */
			while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
				i--;

			start = i;

			/* find beginning of word */
			while (i >= 0 && str[i] != ' ' && str[i] != '\t')
				i--;

			end = i + 1;

			/* print word */
			while (end <= start)
			{
				write(1, &str[end], 1);
				end++;
			}

			/* print space if more words */
			if (i >= 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}