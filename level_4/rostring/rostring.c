#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void print_word(char *s, int start, int end)
{
	while (start < end)
		write(1, &s[start++], 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int fw_start;
	int fw_end;

	if (argc < 2)
		return (write(1, "\n", 1), 0);

	char *str = argv[1];

	// skip spaces
	while (str[i] && is_space(str[i]))
		i++;

	// save first word
	fw_start = i;
	while (str[i] && !is_space(str[i]))
		i++;
	fw_end = i;

	// print rest of string
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;

		start = i;

		while (str[i] && !is_space(str[i]))
			i++;

		if (start < i)
		{
			print_word(str, start, i);
			write(1, " ", 1);
		}
	}

	// print first word
	print_word(str, fw_start, fw_end);

	write(1, "\n", 1);
	return 0;
}