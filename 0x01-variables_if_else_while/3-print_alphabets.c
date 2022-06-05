#include<stdio.h>
#include<ctype.h>
/**
 * main -Entery point
 *
 * Return: Always 0( (success)
 */
int main(void)

{
	int x = 'a';
	int z = toupper(x);


		while(x <= 'z')
		{
		putchar(x);
		putchar(z);
		x++;
	}
	putchar('\n');
		return (0);
}
