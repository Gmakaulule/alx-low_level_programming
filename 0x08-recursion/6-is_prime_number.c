#include "main.h"

/**
 * prime - Makes possible to evaluate from 1 to n
 * @x: int input
 * @r: int input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int prime(int x, int r)
{
	if (x == r)
		return (1);
	else if (x % r == 0)
		return (0);
	return (prime2(x, r + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Integer
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
