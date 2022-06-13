#include "main.h"

/**
 * _puts - print a string followed by new line
 * @str: it is the string to be printed
 */

void print_rev(char *s)

{
	int x;

	for (x = *s; x >0; x--)
	{
		_putchar(*(s+x));
	}
		_putchar('\n');
}

