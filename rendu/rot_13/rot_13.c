#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str;

	if (argc != 2)
	{
		return (write(1, "\n", 1), 0);
	}
	str = argv[1];
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M' ))
			str[i] += 13;
		
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z' ))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
	
	write(1, "\n", 1);
	return (0);
}