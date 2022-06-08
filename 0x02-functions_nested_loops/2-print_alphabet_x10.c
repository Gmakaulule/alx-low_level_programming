#include "main.h"

/**
 * print_alphabet_x10- prototype function
 *
 * desc-prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	char i;
	int x = 1;

	while (x <= 10)
	{
		alphabet = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		x++;
	}
}
