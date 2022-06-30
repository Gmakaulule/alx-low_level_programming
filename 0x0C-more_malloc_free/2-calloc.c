#include "main.h"
#include <stdlib.h>
/**
 * _calloc - create an array
 * @nmemb: number of array elements
 * @size: size of an array in bytes
 * Return: returning pointer to newly created array
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *p;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}

	p = malloc(size * nmemb);
	{
		return (p);
	}
}
