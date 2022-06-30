#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory dynamically
 * @b: number of elements to be considered when creating the space
 * Return: returning pointer to the space created
 */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = (int *)malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
