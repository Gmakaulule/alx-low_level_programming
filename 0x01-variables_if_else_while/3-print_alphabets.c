#include<stdio.h>
#include<ctype.h>
/**
 * main -Entery point
 *
 * Return: Always 0( (success)
 */
int main(void)

{
	int x;
	int z;


		for (x = 'a'; x  <= 'z'; x++)
		{
		putchar(x);
		}

		for (z = 'A'; z <= 'Z'; z++)
		{
		putchar(z);
		}
		putchar('\n');
		return (0);
}
