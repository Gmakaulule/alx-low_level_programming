#include "main.h"
/**
 * _puts_recursion - print string
 * @s: string to be printed
 * return: void
 */

void _puts_recursion(char *s)
{


	if (*s == '\0')
	{
		return;
	}
	{
	_putchar(*s);
		s++;
	_puts_recursion(s);

	}
	_putchar('\n');
}
