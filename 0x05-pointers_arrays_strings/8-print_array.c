#include <stdio.h>

/**
 * print_array - print n element of array
 * @n: is the index of an arrray
 * @a:is the pointer to an array
 */



void print_array(int *a, int n)

{
	int i;

	while (a[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}


	printf("\n");

}
