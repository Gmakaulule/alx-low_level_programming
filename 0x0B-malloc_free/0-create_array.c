#include "main.h"
#include <stdlib.h>
/**
 * create_array - it create an array from given char
 * @size: the size of an array
 * @c: input char
 * Return: return pointer to char
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *x;

	x = &c;

x = (char *)malloc(size * sizeof(char));

	if (x == 0)

{
	return ('\0');
}

	else if (x == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
		return (x);
}
