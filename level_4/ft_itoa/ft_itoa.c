#include <stdlib.h>

int count_digits(int n)
{
	int count = 0;
	if (n <= 0)
	count = 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int len;
	long nb = nbr;

	len = count_digits(nbr);
	str = malloc(len + 1);
	if (!str)
		return NULL;
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = nb % 10 + '0';
		nb /= 10;
	}
	
	return str;
}