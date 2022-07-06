#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - print arrays of integer
 * @array:input array
 * @size: size of array
 * @action: pointer to function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

	size_t i = 0;

	if (array != NULL && size > 0 && action != NULL)
	for (i = 0 ; i < size; i++)
	{
	action(array[i]);
	}
}
