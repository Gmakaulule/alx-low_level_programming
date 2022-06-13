#include "main.h"

/**
 * puts2 - print every other charecter in a string
 *
 * _strlen - return the lengle of a string
 * Return:the index lenth of array
 * @str: it is the string to be printed
 */


int _strlen(char *str)

{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;

	}

		return (x);

}



void puts2(char *str)

{
	int x;
	int i;

	x = _strlen(str);

	for (i = 0; i < x; i += 2)

	{
		_putchar(str[i]);
	}
}

