#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstrs(char *s)
{
	int i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}
void ft_putnbr(int n)
{
	long nb;
	nb = n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int covert_str(char *str)
{
	int i = 0;
	int nb = 0;
	while (str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return nb;
}
int main(int argc, char **argv)
{
	int i = 1;
	char *str;
	int n = 0;

	if (argc != 2)
		return(write(1, "\n", 1));
	str = argv[1];
	n = covert_str(str);

	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putstrs(" x ");
		ft_putnbr(n);
		ft_putstrs(" = ");
		ft_putnbr(i * n);
		ft_putchar('\n');
		i++;
	}
	return 0;
}
