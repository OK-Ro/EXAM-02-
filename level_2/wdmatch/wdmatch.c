#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char *str1;
	char *str2;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2]; 

		while (str1[i] && str2[j])
		{
			if (str1[i] == str2[j])
				i++;
			j++;
		}
		if (str1[i] == '\0')
			write(1, str1, i);
		
	}
	write(1,"\n", 1);
	return 0;
}