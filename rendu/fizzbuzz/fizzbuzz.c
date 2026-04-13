#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
	long nb = n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1,"fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1,"fizz", 4);
		else if (n % 5 == 0)
			write(1,"buzz", 4);
		else
			ft_putnbr(n);
		ft_putchar('\n');
		n++;
	}
	return (0);
}