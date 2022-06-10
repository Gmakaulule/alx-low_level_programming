#include "main.h"
/**
 * print_square - It print squre
 * @size: Number of # that make the squre
 * Return: Return 0 success
 */

void print_square(int size)

{
	int x = 0;
	int z;

	while (x < size)
	{
		z = 0;

		while (z < size)
		{
			_putchar('#');
			z++;
		}
		if (x < (size - 1))
			_putchar('\n');
		x++;
	}
	_putchar('\n');
}
