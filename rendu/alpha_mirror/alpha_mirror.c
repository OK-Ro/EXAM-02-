#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	str = argv[1];
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - (str[i] - 'A');
		write(1, &str[i], 1);
		i++;
	}
	(write(1, "\n", 1));
	return 0;
}


/*


Your subject: alpha_mirror
==================================================
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
==================================================
Type 'test' to test your code, 'next' to get a new question, or 'exit' to quit.
/> ^Cmake: *** [Makefile:3: all] Interrupt

f1r7s1% 
*/