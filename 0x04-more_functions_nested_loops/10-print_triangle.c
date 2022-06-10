#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: is the size of triangle
 *
 * Return:void
 *
 */

void print_triangle(int size)

{
	int x = 1;
	int r;

	while (x <= size)
	{
		r = size;

		while (r > 0)
		{
			if (r <= x)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
			r--;
		}
		if (x < size)
			_putchar('\n');
		x++;
	}
	_putchar('\n');
}

