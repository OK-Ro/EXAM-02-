#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	int b;
	int results;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		if (argv[2][0] == '+')
			results = a + b;
		else if (argv[2][0] == '-')
			results = a - b;
		else if (argv[2][0] == '*')
			results = a * b;
		else if (argv[2][0] == '/')
			results = a / b;
		else if (argv[2][0] == '%')
			results = a % b;
		else
			return (0);

		printf("%d\n", results);
	}
	else
		write(1, "\n", 1);
	return 0;
}

