#include "main.h"

/**
 * _sqrt_recursion - returns square root
 * @n: int input
 * Return: squre root.
 */

int _sqrt_recursion(int n)
{
	int z = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, z));
}

/**
 * find_sqrt - Finds square root
 * @y: The number to find the square root of.
 * @x: The root to be tested.
 * Return: the square root
 */

int find_sqrt(int x, int y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if (x == y / 2)
	{
		return (-1);
	}
	return (find_sqrt(y, x + 1));
}
