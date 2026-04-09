/*

Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again,
	maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str;

	// Ensure the program receives exactly one argument
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	str = argv[1];

	// Skip all leading spaces and tabs to find the start of the first word
	while (str[i] == ' ' || str[i] == '\t')
		i++;

	// Print characters of the first word:
	// stop when we reach a space, tab, or end of string
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}

	// Always end output with a newline
	write(1, "\n", 1);

	return (0);
}