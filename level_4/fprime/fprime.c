#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 2;
	int n;
	int first = 1;

	if (argc == 2)
	{
		n = atoi(argv[1]);

		if (n == 1)
		{
			printf("1\n");
			return 0;
		}
		while (i <= n)
		{
			if (n % i == 0)
			{
				if (!first)
					printf("*");
				printf("%d", i);
				first = 0;
				n /= i;
			}
			else	
				i++;
		}
		
	}
	printf("\n");
}