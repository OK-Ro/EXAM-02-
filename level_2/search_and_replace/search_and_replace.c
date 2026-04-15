#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str;

	if (argc != 4)
		return (write(1, "\n", 1), 0);
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
		return (write(1, "\n", 1), 0);
	str = argv[1];
	while (str[i])
	{
		if (str[i] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
