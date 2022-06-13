#include "main.h"

/**
 * puts2 - print every other charecter in a string
 *
 * Return:the index lenth of array
 * @str: it is the string to be printed
 */


void puts2(char *str)

{
	int x = 0;
	int i;

	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i += 2)
	{

		_putchar(str[i]);
	}


	_putchar('\n');
}

