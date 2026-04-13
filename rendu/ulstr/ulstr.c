#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	str = argv[1];
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}