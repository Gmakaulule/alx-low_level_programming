#include "main.h"

/**
 * _puts - print a string followed by new line
 * @str: it is the string to be printed
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str++);

	}
	_putchar('\n');

}
