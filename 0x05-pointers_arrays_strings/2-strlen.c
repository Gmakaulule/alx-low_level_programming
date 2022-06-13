#include "main.h"

/**
 * _strlen - calculate the length of a string.
 * @s: input string
 * Return: return length of string
 */

int _strlen(char *s)

{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

		return (x);

}
