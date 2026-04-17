#include <unistd.h>

void printhex(unsigned int n)
{
	char *base = "0123456789abcdef";

	if (n >= 16)
		printhex(n / 16);
	write(1, &base[n % 16], 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int results = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return (results);
}
int main(int argc, char **argv)
{
	unsigned int n = 0;
	
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		printhex(n);
	}
	write(1, "\n", 1);
	return 0;
}