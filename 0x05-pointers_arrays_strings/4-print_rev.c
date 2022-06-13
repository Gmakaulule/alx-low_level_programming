#include "main.h"

/**
 * print_rev - print a string in reverse followed by new line
 * @s: it is the string to be printed
 */

void print_rev(char *s)

{
	int x, z = 0;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		z++;
	}

	for (x = z - 1; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}

