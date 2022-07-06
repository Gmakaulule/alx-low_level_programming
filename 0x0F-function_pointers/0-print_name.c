#include "main.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: string to be printed
 * @f: pointer to function print-name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
