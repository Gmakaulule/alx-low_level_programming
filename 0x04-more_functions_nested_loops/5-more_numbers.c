#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int x, r;

	for (r = 0; r < 10; r++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
