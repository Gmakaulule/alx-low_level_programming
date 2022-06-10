#include "main.h"
/**
 * print_diagonal - A function that print lines with '\'
 * @n: The number of slash to print
 * Return: void
 */
void print_diagonal(int n)
{
	int x = 0;
	int y;

	while (x < n)
	{
		y = 0;

		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		_putchar('\\');
		if (x != (n - 1))
			_putchar('\n');
		x++;
	}
	_putchar('\n');
}
