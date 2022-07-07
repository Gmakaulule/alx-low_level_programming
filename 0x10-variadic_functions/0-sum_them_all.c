#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all the input integers
 * @n: input intergers
 * @...: variadic expantion
 * Return: int sum
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;

	va_list x;

	va_start(x, n);

	sum = 0;

	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(x, int);
	}

	va_end(x);
	return (sum);
}
