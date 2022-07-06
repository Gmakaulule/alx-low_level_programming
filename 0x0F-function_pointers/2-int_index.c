#include "function_pointers.h"
#include <stdio.h>
/**
  * int_index - searches for intergers
  * @array: array
  * @size: array size
  * @cmp: pointer
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (cmp != NULL && array != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
