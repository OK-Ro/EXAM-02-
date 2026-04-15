#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int i = 7;
	char results;

	while (i >= 0)
	{
		results = ((octet >> i) & 1) + '0';
		write(1, &results, 1);
		i--;
	}
	
}