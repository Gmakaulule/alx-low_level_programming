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

	if (x == 0)

{
	return ('\0');
}
	x = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
		return (x);
}
