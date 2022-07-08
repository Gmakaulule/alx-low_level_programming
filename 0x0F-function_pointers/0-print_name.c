#include "main.h"
#include "stdlib.h"
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: string to be printed
 * @f: pointer to function print-name
 */

void print_name(char *name, void (*f)(char *))
{
	if(name != NULL || f != NULL)
	f(name);
}
