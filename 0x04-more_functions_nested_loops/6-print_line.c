#include "main.h"

/**
 *print_line - print aline on the screem followed by a new line
 *
 *@n:integer input to the function
 *
 *Return: Returning 0 success
 */

void print_line(int n)

{
	while (n > 0)

	{
		_putchar('_');

		n--;

	}
		putchar('\n');
}
