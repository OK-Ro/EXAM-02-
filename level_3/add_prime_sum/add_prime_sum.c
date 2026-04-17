#include <unistd.h>

int is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return 0;
	while (i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
void ft_putnbr(int n)
{
	char c;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int results = 0;
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return (results);
}

int main(int argc, char **argv)
{
	int i = 2;
	int sum = 0;
	int n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return 0;
}