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
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);


}
