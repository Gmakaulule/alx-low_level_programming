#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = '\n';
	int x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x == 'q' || x == 'e')
		continue;
	 putchar(x);
	}
	putchar(z);

	return (0);
}
