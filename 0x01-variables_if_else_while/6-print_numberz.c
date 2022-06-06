#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entery point
 *
 * REturn: Always 0 (success)
 */
int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
		return (0);
}
