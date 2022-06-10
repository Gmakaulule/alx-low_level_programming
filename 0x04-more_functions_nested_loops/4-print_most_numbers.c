#include "main.h"

/**
* print_most_numbers - prints numbers from '0' to '9'
*
* Return:Return void`
*
*/

	void print_most_numbers(void)
	{

		char x = 0;

	while (x <= 9)

	{
	if (x != 4 && x != 2)
	{
	_putchar(x + '0');
	}
	x++;
	}

	_putchar('\n');

	}
