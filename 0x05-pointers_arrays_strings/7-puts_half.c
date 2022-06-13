#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the input string
 */

void puts_half(char *str)

	{
	int x = 0;
	int i;

	while (str[x] != '\0')
	{
		x++;
	}

	for (i = x / 2; i < x; i++)
	{

		_putchar(str[i]);
	}


	_putchar('\n');
}

