#include "main.h"

/**
 * _isupper - Check of alphaberts are lower or upper case
 *
 * @c: ascii value
 *
 * Return: Always 0 if c is lower case or 1 for uppuer case
 */



int _isupper(int c)

{
	if (c >= 65 || c <= 90)
	{
		_putchar(c);
		_putchar(':');
		return ('1');

	}
		else if (c >= 97 || c <= 122)
		{
		_putchar(c);
		_putchar(':');
		return (0);
		

		}

	_putchar('\n');

	return (0); }
