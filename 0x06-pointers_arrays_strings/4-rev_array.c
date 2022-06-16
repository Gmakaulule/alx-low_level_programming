#include "main.h"

/**
 * reverse_array - reverses an array of numbers
 * @a: it is a pointer to the array
 * @n: it is the length of an array
 *
 */

void reverse_array(int *a, int n)
{
	int i, x, y;

	for (i = 0; i < n; i++)
	{
		x = i + 1;
		y = a[i];

		if (i > (n - x))
			break;

		a[i] = a[n - x];
		a[n - x] = y;

	}
}
