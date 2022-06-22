#include "main.h"
/**
 * factorial - calculate factorial for integer
 * @n: input integer
 * Return: factorial
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
