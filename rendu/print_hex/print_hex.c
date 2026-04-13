#include <unistd.h>

void print_hex(int n)
{
	char *base;
	base = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &base[n % 16], 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	char *str;
	int nb = 0;

	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			nb = nb * 10 + (str[i] - '0');
			i++;
		}
		print_hex(nb);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}