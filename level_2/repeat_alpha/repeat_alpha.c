#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str;
	int j;

	if (argc != 2)
		return (write(1, "\n",1) , 0);
	str = argv[1];
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a' + 1;
			while (j--)
				write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A' + 1;
			while (j--)
				write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	
	write(1, "\n", 1);
}