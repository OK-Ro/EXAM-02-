#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);  
        i++;
    }
}
int ft_atoi(char *str)
{
	int i = 0;
	int results  = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return results;
}

#include <stdio.h>
int main(int argc, char **argv)
{
	int i = 1;
	int number;
	char *str;
	
	if (argc == 2)
	{
	
		str = argv[1];
		number = ft_atoi(str);

		while (i <= 9)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(number);
			ft_putstr(" = ");
			ft_putnbr(i * number);
			ft_putchar('\n');
			i++;
		}
	}
		else
		write(1, "\n", 1);
	return 0;
}